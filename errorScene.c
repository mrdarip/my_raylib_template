#include "raylib.h"

#include "button.h"
#include "screens.h"

void LoadErrorScene()
{
    
}

void ErrorScene(int context)
{
    buttonConf basicConfig = (buttonConf) {RED,BLUE,GRAY};
    
    BeginDrawing();
    
        ClearBackground(PINK);
        
        DrawText(TextFormat("An error has ocurred; Context: %d",context), 100, 50, 20, BLACK);
        
        if (ButtonEx((Rectangle) {500,200,100,50}, (Rectangle) {500,200,100,50}, basicConfig))
        {
            exitWindow = true;
        }   
        
        DrawTextureEx(mouseTexture,GetMousePosition(),0,1, WHITE); 
        
    EndDrawing();
}

void UnloadErrorScene()
{
    
}