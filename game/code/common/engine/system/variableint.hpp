#ifndef VARIABLE_INT_HPP
#define VARIABLE_INT_HPP

//////////////////////////////////////////////////////
// INCLUDES
//////////////////////////////////////////////////////

#include "common/engine/system/variable.hpp"

//////////////////////////////////////////////////////
// FORWARD DECLARATIONS
//////////////////////////////////////////////////////

//////////////////////////////////////////////////////
// CONSTANTS
//////////////////////////////////////////////////////

//////////////////////////////////////////////////////
// CLASSES
//////////////////////////////////////////////////////

class VariableInt : public Variable
{
public:
	VariableInt();
	VariableInt( int value );
	~VariableInt();

	int GetValue();
	void SetValue( int value );

private:

	int mValue;
};

#endif
