#pragma once
#include <raymath.h>
#include <variant>

struct RectangleShape { float width; float height;};
struct CircleShape    { float radius;};

using Shape = std::variant<RectangleShape, CircleShape>;

/*
 * CLASS DECLARATION Body
 * --
 * Implements all attributes associated with a 'Body' in Classical Physics
 * --
 * Attributes are:
 * 1. Mass
 * 2. Position
 * 3. Velocity
 */
class Body
{
private:
    float mass;

    Vector2 position;
    Vector2 velocity;

    Shape shape;

    /*
     * CONSTRUCTORS
     */
    Body(float mass_, Vector2 position_, Shape shape_);
public:
    /*
     * CONSTRUCTORS
     */
    static Body MakeRectangle(float mass_, Vector2 position_, float width, float height);
    static Body MakeCircle(float mass_, Vector2 position_, float radius);


    /*
     * GETTERS
     */
    [[nodiscard]] float   GetMass() const;
    [[nodiscard]] Vector2 GetPosition() const;
    [[nodiscard]] Vector2 GetVelocity() const;
    [[nodiscard]] float   GetWidth() const;
    [[nodiscard]] float   GetHeight() const;
    [[nodiscard]] float   GetRadius() const;
    [[nodiscard]] const Shape& GetShape() const;

    /*
     * SETTERS
     */
    void SetMass(float mass_);
    void SetPosition(Vector2 position_);
    void SetVelocity(Vector2 velocity_);

    /*
     * OTHER FUNCTIONS
     */
};