#include "Body.h"

/*
 * CLASS DEFINITION Body
 * --
 * Implements all attributes associated with a 'Body' in Classical Physics
 * --
 * Attributes are:
 * 1. Mass
 * 2. Position
 * 3. Velocity
 */

/*
 * CONSTRUCTORS
 */
Body::Body(float mass_, Vector2 position_, Shape shape_)
    :   mass(mass_),
        position(position_),
        velocity(Vector2{}),
        shape(shape_)
{}

Body Body::MakeRectangle(float mass_, Vector2 position_, float width, float height)
{
    return Body(mass_, position_, RectangleShape{width, height});
}

Body Body::MakeCircle(float mass_, Vector2 position_, float radius)
{
    return Body(mass_, position_, CircleShape{radius});
}
    

/*
 * GETTERS
 */
float Body::GetMass() const
{
    return mass;
}

Vector2 Body::GetPosition() const
{
    return position;
}
Vector2 Body::GetVelocity() const
{
    return velocity;
}

float Body::GetWidth() const
{
    if (auto attempt = std::get_if<RectangleShape>(&shape))
    {
        return attempt->width;
    }

    return 0;
}

float Body::GetHeight() const
{
    if (auto attempt = std::get_if<RectangleShape>(&shape))
    {
        return attempt->height;
    }

    return 0;
}

float Body::GetRadius() const
{
    if (auto attempt = std::get_if<CircleShape>(&shape))
    {
        return attempt->radius;
    }

    return 0;
}

const Shape& Body::GetShape() const
{
    return shape;
}


/* 
 * SETTERS
 */
void Body::SetMass(float mass_)
{
    mass = mass_;
}

void Body::SetPosition(Vector2 position_)
{
    position = position_;
}

void Body::SetVelocity(Vector2 velocity_)
{
    velocity = velocity_;
}