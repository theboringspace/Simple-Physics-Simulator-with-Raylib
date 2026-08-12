#include <raylib.h>
#include <math.h>

#include "GravityForce.hpp"
#include "Body.hpp"

/*
 * GLOBAL CONSTANTS 
 */
const int MONITOR_WIDTH  = 2560;
const int MONITOR_HEIGHT = 1440;
constexpr int WINDOW_WIDTH  = MONITOR_WIDTH  / 2;
constexpr int WINDOW_HEIGHT = MONITOR_HEIGHT / 2;

int main()
{
    


    /*
     * INITIALIZATION
     */
    InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "Simple Simulator");
    SetTargetFPS(GetMonitorRefreshRate(GetCurrentMonitor()));

    float dt{};

    /*
     * CONSTANTS
     */
    const float EARTH_SURFACE_GRAVITY = 9.81;


    GravityForce gravity(EARTH_SURFACE_GRAVITY);
    
    
 
    Body Square = Body::MakeRectangle(60, {500, 500}, 50, 50);
    // Square.SetVelocity(Vector2{200.0F, 200.0F});
    /*
     * MAIN LOOP - Process & Update
     */
    while (!WindowShouldClose())
    {
        /*
         * PROCESS
         */
        dt = GetFrameTime();

        gravity.Apply(Square);


        // Square.SetPosition(Vector2{Square.GetPosition().x + Square.GetVelocity().x * GetFrameTime(), Square.GetPosition().y + Square.GetVelocity().y * GetFrameTime()});
        // if (Square.GetPosition().x >= WINDOW_WIDTH - Square.GetWidth() || Square.GetPosition().x <= 0)
        // {
        //     Square.SetVelocity(Vector2{-1.0F * Square.GetVelocity().x, Square.GetVelocity().y});
        // }
        // if (Square.GetPosition().y >= WINDOW_HEIGHT - Square.GetHeight() || Square.GetPosition().y <= 0)
        // {
        //     Square.SetVelocity(Vector2{Square.GetVelocity().x, -1.0F * Square.GetVelocity().y});    
        // }

        /*
         * DRAW
         */
        BeginDrawing();
        ClearBackground(WHITE);

        DrawFPS(0, 0);
        DrawRectangle(Square.GetPosition().x, Square.GetPosition().y, Square.GetWidth(), Square.GetHeight(), BLACK);
        

        EndDrawing(); 
    }
    CloseWindow();


    return 0;
}