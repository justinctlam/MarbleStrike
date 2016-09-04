#if defined( RENDER_PLAT_OGLES1_1)

#ifndef FIXED_OGL_BLEND_STATE_HPP
#define FIXED_OGL_BLEND_STATE_HPP

//////////////////////////////////////////////////////
// INCLUDES
//////////////////////////////////////////////////////

#include "common/engine/render/blendstate.hpp"

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

class FixedOGLBlendState : public BlendState
{
public:

	FixedOGLBlendState();
	~FixedOGLBlendState();

	void Dispatch( 
		RenderStateShadowing* renderStateShadowing,
		void* context,
		bool forceUpload = false 
		);
		
private:

};

#endif

#endif