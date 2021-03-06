#ifndef INTERPOLATORS_HPP
#define INTERPOLATORS_HPP

//////////////////////////////////////////////////////
// INCLUDES
//////////////////////////////////////////////////////

#include "common/engine/math/vector2.hpp"
#include "common/engine/math/vector3.hpp"

//////////////////////////////////////////////////////
// FORWARD DECLARATIONS
//////////////////////////////////////////////////////

namespace Math
{
	class Quaternion;
}

//////////////////////////////////////////////////////
// CONSTANTS
//////////////////////////////////////////////////////

//////////////////////////////////////////////////////
// STRUCTURES
//////////////////////////////////////////////////////

//////////////////////////////////////////////////////
// FUNCTIONS
//////////////////////////////////////////////////////

namespace Animation
{
	Math::Vector3 LinearInterpolation( const Math::Vector3 &data0, const Math::Vector3 &data1, float t );
	Math::Quaternion Interpolation( const Math::Quaternion &data0, const Math::Quaternion &data1, float t );
	float LinearInterpolation( const float &data0, const float &data1, float t );
	int LinearInterpolation( const int &data0, const int &data1, float t );
}

#endif
