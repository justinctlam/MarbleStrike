//--------------------------------------------------------------------------------------
// INCLUDES
//--------------------------------------------------------------------------------------
#include "glsldefines.h"

//--------------------------------------------------------------------------------------
// VARYING VARIABLES
//--------------------------------------------------------------------------------------
attribute float3 inVertex;
attribute float3 inNormal;

//--------------------------------------------------------------------------------------
// GLOBAL VARIABLES
//--------------------------------------------------------------------------------------
uniform float4x4 gObjectToProjectionMatrix;
uniform float4x4 gObjectToViewMatrix;

//--------------------------------------------------------------------------------------
// VARYING VARIABLES
//--------------------------------------------------------------------------------------
varying float4 vDepthViewSpace;

//--------------------------------------------------------------------------------------
// VERTEX SHADER
//--------------------------------------------------------------------------------------
void main()
{	
    gl_Position = gObjectToProjectionMatrix * float4( inVertex, 1 );    
    vDepthViewSpace = gObjectToViewMatrix * float4( inVertex, 1 );
}