//////////////////////////////////////////////////////
// INCLUDES
//////////////////////////////////////////////////////

#include "common/engine/render/particle.hpp"

//////////////////////////////////////////////////////
// CLASS METHODS
//////////////////////////////////////////////////////

Particle::Particle()
{
	mState = PARTICLE_STATE_DESTROYED;	
	mLife = 0;
	mSize = 0;
	mShrink = 0;
	mDecay = 0;
}

//===========================================================================

Particle::~Particle()
{
}