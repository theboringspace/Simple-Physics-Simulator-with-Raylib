#include <raylib.h>
#include <math.h>

#include "Body.h"

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
     * CONSTANTS
     */
    // Arbitrary values just for testing. Change to modular in future.


    /*
     * INITIALIZATION
     */
    InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "Simple Simulator");
    SetTargetFPS(GetMonitorRefreshRate(GetCurrentMonitor()));

    Body Square = Body::MakeRectangle(60, {500, 500}, 50, 50);

    /*
     * MAIN LOOP - Process & Update
     */
    while (!WindowShouldClose())
    {
        /*
         * PROCESS
         */
       

        /*
         * DRAW
         */
        BeginDrawing();
        ClearBackground(WHITE);

        DrawRectangle(Square.GetPosition().x, Square.GetPosition().y, Square.GetWidth(), Square.GetHeight(), BLACK);
        

        EndDrawing(); 
    }
    CloseWindow();

    return 0;
}