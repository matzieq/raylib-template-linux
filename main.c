#include "raylib.h"

int main(void) {
  InitWindow(1280, 720, "First window");
  SetTargetFPS(60);

  while (!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(RAYWHITE);
    DrawText("Text", 50, 50, 20, LIGHTGRAY);
    EndDrawing();
  }

  CloseWindow();
  return 0;
}
