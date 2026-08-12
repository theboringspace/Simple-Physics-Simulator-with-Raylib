#include "IForce.hpp"

class GravityForce : public IForce 
{
private:
    float gravity;
public:
    GravityForce(float gravity_);

    void Apply(Body& body) override;
};