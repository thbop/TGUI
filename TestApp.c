#include "stdio.h"
#include "TGUI.h"


int main() {
    InitWindow( 1200, 800, "TGUI - Test App" );
    SetTargetFPS( 60 );
    SetExitKey( KEY_NULL );

    Image img = LoadImageFromMemory(".png", TGUI_fontPng, sizeof(TGUI_fontPng));
    Texture tex = LoadTextureFromImage(img);
    UnloadImage(img);

    while ( !WindowShouldClose() ) {
        BeginDrawing();
            DrawTextureEx(tex, (Vector2){10.0f, 10.0f}, 0.0f, 3.0f, WHITE);

        EndDrawing();
    }

    UnloadTexture(tex);
    CloseWindow();
}