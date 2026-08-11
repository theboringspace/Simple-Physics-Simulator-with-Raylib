#pragma once
#include <raymath.h>


enum class ShapeType {Rectangle, Circle};

struct Rectangle_ { float width; float height;};

struct Circle { Vector2 center; float radius;};

/*
 * CLASS DECLARATION Body
 * --
 * Implements all attributes associated with a 'Body' in Classical Physics
 * --
 * Attributes are:
 * 1. Mass
 * 2. Position
 * 3. Velocity
 * 4. Acceleration
 */
class Body
{
private:
    float mass;

    Vector2 position;
    Vector2 velocity;

    ShapeType shape;

    /*
     * CONSTRUCTORS
     */
    Body();
    Body(float mass_, Vector2 position_);
public:
    /*
     * CONSTRUCTORS
     */
    static Body MakeRectangle(float mass_, Vector2 position_, float width, float height);
    static Body MakeCircle(float mass_, Vector2 position_, float radius);

    union 
    {
        Rectangle_ rectangle;
        Circle    circle;
    };

    /*
     * DESTRUCTOR
     */
    ~Body();

    /*
     * GETTERS
     */
    float       GetMass();
    Vector2     GetPosition();
    Vector2     GetVelocity();
    ShapeType   GetShape();
    float       GetWidth();
    float       GetHeight();
    float       GetRadius();

    /*
     * SETTERS
     */
    void SetMass(float mass_);
    void SetPosition(Vector2 position_);
    void SetVelocity(Vector2 velocity_);
    void SetShape(ShapeType shape_);
    void SetAllAttributes(float mass_, Vector2 position_, Vector2 velocity_, ShapeType shape_);

    /*
     * OTHER FUNCTIONS
     */
};