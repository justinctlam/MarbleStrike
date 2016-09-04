//////////////////////////////////////////////////////
// INCLUDES
//////////////////////////////////////////////////////

#include "common/engine/render/rendertarget.hpp"

//////////////////////////////////////////////////////
// CLASSES
//////////////////////////////////////////////////////

RenderTarget::RenderTarget()
{
	mWidth = 0;
	mHeight = 0;
};

//===========================================================================

RenderTarget::~RenderTarget()
{

};

//===========================================================================

void RenderTarget::SetWidth( int width )
{
	mWidth = width;
}

//===========================================================================

void RenderTarget::SetHeight( int height )
{
	mHeight = height;
}

//===========================================================================

int RenderTarget::GetWidth()
{
	return mWidth;
}

//===========================================================================

int RenderTarget::GetHeight()
{
	return mHeight;
};