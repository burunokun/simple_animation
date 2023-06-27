#include <stdbool.h>
#include <stdio.h>
#include "raylib.h"

#define FPS 60
int screen_width = 800;
int screen_height = 600;
float tile_size = 30.;
float speed = 5.;

int main(void) {

    bool paused = false;
    float x, y, w, h, dx, dy, radius;
    x = (float)screen_width/2 - tile_size;
    y = (float)screen_height/2 - tile_size;
    w = h = tile_size;
    dx = dy = speed;
    radius = 50;

    InitWindow(screen_width, screen_height, "test");
    SetTargetFPS(FPS);

    while (!WindowShouldClose())
    {
        // Rectangle rect = { x, y, w, h };
        BeginDrawing();
            ClearBackground(BLACK);
            DrawCircle(x, y, radius, RED);
            // DrawRectangleRec(rect, RED);
        EndDrawing();
        int key = GetKeyPressed();
        switch (key) {
            case ' ':
                paused = !paused;
                printf("%s\n", paused ? "paused" : "resume");
        }
        if (!paused) {
            x += dx;
            y += dy;
        }
        // if (x < 0 || x >= screen_width - tile_size) dx = -dx;
        // if (y < 0 || y >= screen_height - tile_size) dy = -dy;
        if (x - radius < 0 || x >= screen_width - radius) dx = -dx;
        if (y - radius < 0 || y >= screen_height - radius) dy = -dy;
    }
    CloseWindow();
    return 0;
}
