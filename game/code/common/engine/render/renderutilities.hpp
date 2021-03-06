#ifndef RENDER_UTILITIES_HPP
#define RENDER_UTILITIES_HPP

//////////////////////////////////////////////////////
// INCLUDES
//////////////////////////////////////////////////////

#include "common/engine/math/matrix44.hpp"
#include "common/engine/database/database.hpp"

//////////////////////////////////////////////////////
// FORWARD DECLARATIONS
//////////////////////////////////////////////////////

//////////////////////////////////////////////////////
// STRUCTURES
//////////////////////////////////////////////////////

//////////////////////////////////////////////////////
// CLASSES
//////////////////////////////////////////////////////

namespace Render
{
	Math::Matrix44 ProjectionOrientation( const Math::Matrix44 &projectionMatrix );
}

#endif
