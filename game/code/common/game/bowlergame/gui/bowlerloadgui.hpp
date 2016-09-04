#ifndef BOWLER_LOAD_GUI_HPP
#define BOWLER_LOAD_GUI_HPP

//////////////////////////////////////////////////////
// INCLUDES
//////////////////////////////////////////////////////

#include "common/engine/gui/guiscreen.hpp"

//////////////////////////////////////////////////////
// FORWARD DECLARATIONS
//////////////////////////////////////////////////////

class SpriteAnimated;

//////////////////////////////////////////////////////
// CONSTANTS
//////////////////////////////////////////////////////

//////////////////////////////////////////////////////
// CLASSES
//////////////////////////////////////////////////////

class BowlerLoadGui : public GuiScreen
{
public:

	BowlerLoadGui();
	~BowlerLoadGui();
    	
	void Initialize();    

protected:
};

#endif
