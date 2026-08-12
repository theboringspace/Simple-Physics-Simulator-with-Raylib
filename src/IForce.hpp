#include "Body.hpp"

/*
 * ABSTRACT CLASS IForce
 * --
 * Bare Blueprint for all kinds of forces.
 * Forces have a value, and they can be applied on bodies.
 */
class IForce
{
private:
    float force;

public:
    virtual void Apply(Body& body) = 0;
};