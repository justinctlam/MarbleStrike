//--------------------------------------------------------------------------------------
// INCLUDES
//--------------------------------------------------------------------------------------
#include "glsldefines.h"

//--------------------------------------------------------------------------------------
// ATTRIBUTE VARIABLES
//--------------------------------------------------------------------------------------
attribute float3 inVertex;
attribute float4 inColor;
attribute float3 inNormal;
attribute float2 inTexCoord;

//--------------------------------------------------------------------------------------
// GLOBAL VARIABLES
//--------------------------------------------------------------------------------------
uniform float4x4 gProjectionMatrix;
uniform float4x4 gViewMatrix;
uniform float4x4 gTransformMatrix;

//--------------------------------------------------------------------------------------
// VARYING VARIABLES
//--------------------------------------------------------------------------------------
varying float4 vColor;
varying float2 vTexCoord;

//--------------------------------------------------------------------------------------
// VERTEX SHADER
//--------------------------------------------------------------------------------------
void main()
{	
    gl_Position = gProjectionMatrix * gViewMatrix * gTransformMatrix * float4( inVertex, 1.0 );
    vColor = inColor;
    vTexCoord = inTexCoord;
}