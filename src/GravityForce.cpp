#include "GravityForce.hpp"

GravityForce::GravityForce(float gravity_)
:   gravity(gravity_) {}

void GravityForce::Apply(Body& body)
{
    body.ApplyForce(Vector2{0, gravity});
}