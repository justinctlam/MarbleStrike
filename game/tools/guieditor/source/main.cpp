//////////////////////////////////////////////////////
// INCLUDES
//////////////////////////////////////////////////////

#include "main.hpp"
#include "guieditor.hpp"

//////////////////////////////////////////////////////
// GLOBALS
//////////////////////////////////////////////////////

IMPLEMENT_APP(MyApp)

//////////////////////////////////////////////////////
// CLASS METHODS
//////////////////////////////////////////////////////

bool MyApp::OnInit()
{
	GuiEditor* gs = new GuiEditor( wxT( "Gui Editor" ) );	
	gs->Show( true );

	return true;
}