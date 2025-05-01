#include "stdio.h"
#include "TGUI.h"


int main() {
    InitWindow( 1200, 800, "TGUI - Test App" );
    SetTargetFPS( 60 );
    SetExitKey( KEY_NULL );

    TGUI_Initialize();

    TGUI_BeginTool( (Vector2){ 10.0f, 10.0f }, "Test Tool" );

    TGUI_EndTool();

    TGUI_BeginTool( (Vector2){ 276.0f, 276.0f }, "Test Tool 2" );

    TGUI_EndTool();


    while ( !WindowShouldClose() ) {
        BeginDrawing();
            ClearBackground(BLACK);
            TGUI_Run();
        EndDrawing();
    }

    TGUI_Unload();

    CloseWindow();
}