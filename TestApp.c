#include "stdio.h"
#include "TGUI.h"


int main() {
    InitWindow( 1200, 800, "TGUI - Test App" );
    SetTargetFPS( 60 );
    SetExitKey( KEY_NULL );

    TGUI_Initialize();


    while ( !WindowShouldClose() ) {
        BeginDrawing();
            TGUI_DrawText("Hello World!", (Vector2){ 10.0f, 10.0f });
        EndDrawing();
    }

    TGUI_Unload();

    CloseWindow();
}