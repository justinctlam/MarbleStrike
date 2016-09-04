#if defined( RENDER_PLAT_OPENGL )

#ifndef OGL_SAMPLER_STATE_HPP
#define OGL_SAMPLER_STATE_HPP

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

class OGLSamplerState : public SamplerState
{
public:

	OGLSamplerState();
	~OGLSamplerState();

	void Dispatch( 
		RenderStateShadowing* renderStateShadowing,
		void* context, 
		int samplerIndex, 
		bool forceUpload = false 
		);	

	void SetTextureState( int textureType );
		
private:

	static int MipMapFilterTranslation(  FilterMode minFilter, FilterMode mipFilter  );
};

#endif

#endif