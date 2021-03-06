#if defined( RENDER_PLAT_OPENGL )

#ifndef OGL_VERTEX_SHADER_HPP
#define OGL_VERTEX_SHADER_HPP

//////////////////////////////////////////////////////
// INCLUDES
//////////////////////////////////////////////////////

#include "common/engine/render/ogl/oglshader.hpp"
#include "common/engine/render/vertexshader.hpp"
#include "common/engine/system/array.hpp"
#include "common/engine/system/list.hpp"

//////////////////////////////////////////////////////
// FORWARD DECLARATIONS
//////////////////////////////////////////////////////

///////////////////////////////////////////////////////
// STRUCTURES
//////////////////////////////////////////////////////

//////////////////////////////////////////////////////
// CLASSES
//////////////////////////////////////////////////////

class OGLVertexShader : public VertexShader, public OGLShader
{
public:

	OGLVertexShader();
	~OGLVertexShader();

	void Load( const char* path, const char* name );
	void Reload();

private:

};

#endif

#endif