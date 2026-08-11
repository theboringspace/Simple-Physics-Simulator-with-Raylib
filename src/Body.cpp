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
 * 4. Acceleration
 */

/*
 * CONSTRUCTORS
 */
Body::Body()
    :   mass(float{}),
        position(Vector2{}),
        velocity(Vector2{})
{}

Body::Body(float mass_, Vector2 position_)
    :   mass(mass_),
        position(position_),
        velocity(Vector2{}) 
{}

Body Body::MakeRectangle(float mass_, Vector2 position_, float width, float height)
{
    Body body = Body(mass_, position_);
    body.shape = ShapeType::Rectangle;
    
    body.rectangle = {width, height};
    return body;
}

Body Body::MakeCircle(float mass_, Vector2 position_, float radius)
{
    Body body = Body(mass_, position_);
    body.shape = ShapeType::Circle;
    
    body.circle = {radius};

    return body;
}
    
/*
 * DESTRUCTORS
 */
Body::~Body() {}

/*
 * GETTERS
 */
float Body::GetMass()
{
    return mass;
}

Vector2 Body::GetPosition()
{
    return position;
}
Vector2 Body::GetVelocity()
{
    return velocity;
}

ShapeType Body::GetShape()
{
    return shape;
}

float Body::GetWidth()
{
    return rectangle.width;
}

float Body::GetHeight()
{
    return rectangle.height;
}

float Body::GetRadius()
{
    return circle.radius;
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

void Body::SetShape(ShapeType shape_)
{
    shape = shape_;
}

void Body::SetAllAttributes(float mass_, Vector2 position_, Vector2 velocity_, ShapeType shape_)
{
    mass         = mass_;
    position     = position_;
    velocity     = velocity_;
    shape        = shape_;
}