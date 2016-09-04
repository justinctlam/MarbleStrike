#ifndef COMMAND_HPP
#define COMMAND_HPP

//////////////////////////////////////////////////////
// INCLUDES
//////////////////////////////////////////////////////

//////////////////////////////////////////////////////
// FORWARD DECLARATION
//////////////////////////////////////////////////////

class ParticleEditorApp;

//////////////////////////////////////////////////////
// CONSTANTS
//////////////////////////////////////////////////////

enum CommandType
{
	COMMAND_MOVE,
	COMMAND_SAVE_STATE,
};

//////////////////////////////////////////////////////
// CLASSES
//////////////////////////////////////////////////////

class Command
{
public:
	Command( ParticleEditorApp* particleEditorApp, CommandType type );
	virtual ~Command();

	virtual void Execute() = 0;
	virtual void Undo() = 0;

	CommandType GetCommandType()
	{
		return mCommandType;
	}

protected:

	ParticleEditorApp* mParticleEditorApp;
	CommandType mCommandType;
};

#endif