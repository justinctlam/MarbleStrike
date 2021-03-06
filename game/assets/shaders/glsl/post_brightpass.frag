//--------------------------------------------------------------------------------------
// INCLUDES
//--------------------------------------------------------------------------------------
#include "glsldefines.h"

//--------------------------------------------------------------------------------------
// GLOBAL VARIABLES
//--------------------------------------------------------------------------------------
uniform highp float4 gBrightPassThreshold; 
uniform highp float4 gDownSampleOffsets[4];
uniform sampler2D gTexture;
varying highp float2 vTexCoord;

//--------------------------------------------------------------------------------------
// PIXEL SHADER
//--------------------------------------------------------------------------------------
void main()
{   
	highp float4 average = float4( 0.0, 0.0, 0.0, 0.0 );
    for( int i = 0; i < 4; i++ )
    {
        average += tex2D( gTexture, vTexCoord + gDownSampleOffsets[i].xy );
    }
    average *= 0.25;

    // Determine the brightness of this particular pixel. As with the luminance calculations
    // there are 4 possible variations on this calculation:
    // 1. Do a very simple mathematical average:
    //float luminance = dot( average.rgb, float3( 0.33f, 0.33f, 0.33f ) );
    // 2. Perform a more accurately weighted average:
    //float luminance = dot( average.rgb, float3( 0.299f, 0.587f, 0.114f ) );
    // 3. Take the maximum value of the incoming, same as computing the
    //    brightness/value for an HSV/HSB conversion:
    highp float luminance = max( average.r, max( average.g, average.b ) );
    // 4. Compute the luminance component as per the HSL colour space:
    //float luminance = 0.5f * ( max( average.r, max( average.g, average.b ) ) + min( average.r, min( average.g, average.b ) ) );
    // 5. Use the magnitude of the colour
    //float luminance = length( average.rgb );
    // Determine whether this pixel passes the test...
    if ( luminance < gBrightPassThreshold.x )
    {
		average = float4( 0.0, 0.0, 0.0, 1.0 );
	}
    
    gl_FragColor = average;    
}