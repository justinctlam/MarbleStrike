#ifndef RENDERQUEUE_HPP
#define RENDERQUEUE_HPP

//////////////////////////////////////////////////////
// INCLUDES
//////////////////////////////////////////////////////

#include "common/engine/render/renderstateshadowing.hpp"

//////////////////////////////////////////////////////
// FORWARD DECLARATIONS
//////////////////////////////////////////////////////

class RenderNode;

//////////////////////////////////////////////////////
// CONSTANTS
//////////////////////////////////////////////////////

const int MAX_RENDER_NODES = 500;

//////////////////////////////////////////////////////
// CLASSES
//////////////////////////////////////////////////////

class RenderQueue
{
public:

	RenderQueue();
	virtual ~RenderQueue();

	void ClearStates();
	RenderNode* CreateRenderNode();
	virtual void Render();
    int GetNumCurrentRenderNodes()
    {
        return mNumCurrentRenderNodes;
    }

protected:

	RenderNode* mRenderNodes;
	int mNumCurrentRenderNodes;

private:

	RenderStateShadowing mRenderStateShadowing;
};

#endif

