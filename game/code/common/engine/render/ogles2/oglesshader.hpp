#if defined( RENDER_PLAT_OGLES2 )

#ifndef OGLES_SHADER_HPP
#define OGLES_SHADER_HPP

//////////////////////////////////////////////////////
// INCLUDES
//////////////////////////////////////////////////////

#include "common/engine/render/ogles2/ogleswrapper.hpp"
#include "common/engine/system/array.hpp"
#include "common/engine/system/fixedstring.hpp"
#include "common/engine/system/list.hpp"
#include <vector>

//////////////////////////////////////////////////////
// FORWARD DECLARATIONS
//////////////////////////////////////////////////////

///////////////////////////////////////////////////////
// STRUCTURES
//////////////////////////////////////////////////////

//////////////////////////////////////////////////////
// CLASSES
//////////////////////////////////////////////////////

class OGLESShader
{
public:

	OGLESShader();
	virtual ~OGLESShader();

	int GetHandle()
	{
		return mShaderHandle;
	}

protected:

	void LoadShader( const char* filename );	
	void CreateShaderObject( GLenum shaderType );
		
private:
		
	int mShaderHandle;
	
};

#endif

#endif