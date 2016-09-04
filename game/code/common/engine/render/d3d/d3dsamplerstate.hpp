#if defined( RENDER_PLAT_D3D9 )

#ifndef D3D_SAMPLER_STATE_HPP
#define D3D_SAMPLER_STATE_HPP

//////////////////////////////////////////////////////
// INCLUDES
//////////////////////////////////////////////////////

#include "common/engine/render/samplerstate.hpp"

//////////////////////////////////////////////////////
// FORWARD DECLARATIONS
//////////////////////////////////////////////////////

///////////////////////////////////////////////////////
// CONSTANTS
//////////////////////////////////////////////////////

///////////////////////////////////////////////////////
// STRUCTURES
//////////////////////////////////////////////////////

//////////////////////////////////////////////////////
// CLASSES
//////////////////////////////////////////////////////

class D3DSamplerState : public SamplerState
{
public:

	D3DSamplerState();
	~D3DSamplerState();

	void Dispatch( 
		RenderStateShadowing* renderStateShadowing,
		void* context, 
		int samplerIndex, 
		bool forceUpload = false 
		);
		
private:

};

#endif

#endif