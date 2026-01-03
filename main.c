#include <stdio.h>
#include <raylib.h>

#define SCREENWIDTH 800
#define SCREENHEIGHT 800
#define PLAYER_X RED
#define PLAYER_O BLUE
#define TIE_STATE GREY
#define RUN_STATE WHITE

int main ()
{
    InitWindow(SCREENWIDTH, SCREENHEIGHT, "Tic-Tac-Toe");

    int h = GetRenderHeight(), w = GetRenderWidth();
    int cellh = h/3, cellw = w/3;

    while(!WindowShouldClose()){
        BeginDrawing();
            int m = MeasureText("Hello World", 20);
            DrawText("Hello World", w/2 - m/2, h/2, 20, RED); 
            DrawRectanglePro((Rectangle){cellw/2, cellh/2, 200, 20}, (Vector2){100, 10}, 45, PLAYER_X);
            DrawRectanglePro((Rectangle){cellw/2, cellh/2, 200, 20}, (Vector2){100, 10}, -45, PLAYER_X);
            DrawRing((Vector2){cellw/2, cellh/2}, 80, 100, 0, 360, 0,PLAYER_O);
            DrawLineV((Vector2){0, cellh},(Vector2){w, cellh}, RUN_STATE);
            DrawLineV((Vector2){0, 2*cellh},(Vector2){w, 2*cellh}, RUN_STATE);
            DrawLineV((Vector2){cellw, 0},(Vector2){cellw, h}, RUN_STATE);
            DrawLineV((Vector2){2*cellw, 0},(Vector2){2*cellw, h}, RUN_STATE);
        EndDrawing();
    }
    CloseWindow();
    return 0;
}
