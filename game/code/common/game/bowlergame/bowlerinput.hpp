#ifndef BOWLER_INPUT_HPP
#define BOWLER_INPUT_HPP

//////////////////////////////////////////////////////
// INCLUDES
//////////////////////////////////////////////////////

#include <vector>

//////////////////////////////////////////////////////
// FORWARD DECLARATIONS
//////////////////////////////////////////////////////

class InputManager;

//////////////////////////////////////////////////////
// CONSTANTS
//////////////////////////////////////////////////////

enum BowlerInputType
{
    BOWLER_INPUT_TYPE_DOWN,
    BOWLER_INPUT_TYPE_UP,
    BOWLER_INPUT_TYPE_JUMP_DOWN,
    BOWLER_INPUT_TYPE_JUMP_UP,
};

//////////////////////////////////////////////////////
// STRUCTURES
//////////////////////////////////////////////////////

//////////////////////////////////////////////////////
// CLASSES
//////////////////////////////////////////////////////

class BowlerInput
{
public:

	enum KeyState
	{
		KEY_DOWN,
		KEY_UP
	};

	BowlerInput();
	~BowlerInput();

	bool GetToggleKey( unsigned char key );
	bool GetKey( unsigned char key );
	bool GetInput( BowlerInputType intputType );
    std::vector<int> GetTouchInput( BowlerInputType intputType );
	float GetX( int ID );
	float GetY( int ID );
	float GetDeltaX( int ID );
	float GetDeltaY( int ID );
	
private:

	float mCurrentDeltaX;
	float mCurrentDeltaY;
	KeyState mKeyState[256];

};

#endif