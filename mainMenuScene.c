#include "raylib.h"

#include "button.h"
#include "screens.h"

buttonConf basicConfig;

void LoadMainMenu()
{
    basicConfig = (buttonConf) {RED,BLUE,GRAY,LoadTexture("resources/mouseTexture.png")};
}

void MainMenu(unsigned int playScene)
{
    
    BeginDrawing();
        ClearBackground(BLACK);
        
        if (ButtonEx((Rectangle) {0,0,100,50}, (Rectangle) {0,200,100,50}, basicConfig))
        {
            ChangeScene(playScene);
        }
        DrawTextureEx(mouseTexture,GetMousePosition(),0,1, WHITE); 
        
    EndDrawing();
}

void UnloadMainMenu()
{
    UnloadButtonConf(basicConfig);
}