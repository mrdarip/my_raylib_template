/*******************************************************************************************
*
*   raylib Game Template
*
*   <Game title>
*   <Game description>
*
*   This game has been created using raylib (www.raylib.com)
*   raylib is licensed under an unmodified zlib/libpng license (View raylib.h for details)
*
*   Copyright (c) 2021 Ramon Santamaria (@raysan5)
*
********************************************************************************************/

#include "raylib.h"
#include "screens.h"

//global functions(set in screens.h) todo mahe a new header file for engine variables like this?

unsigned int fps;
unsigned int screenScale = 1;

Texture2D mouseTexture;
Vector2 mousePosition;

bool exitWindow = false;
unsigned int actualScene;

//end of global variables

int main(void)
{
    InitWindow(480, 270, "GAME NAME???????????");
    //SetWindowPosition(0, 0);
    //ToggleFullscreen();
    //SetWindowSize(GetMonitorWidth(0), GetMonitorWidth(0));
    //GetMonitorWidth(0); // wtf is this?? like fr WHY
    SetExitKey(0);  // there is no exit key, is alt f4 or nothing haha ( not really, you can set  exitWindow to true to exit)
    HideCursor();
    SetTargetFPS(fps);
    
    mouseTexture = LoadTexture("resources/mouseTexture.png");
    
    LoadScene(0);
    
    while (!exitWindow)
    {
        exitWindow = WindowShouldClose();
        
        mousePosition = GetMousePosition();
        
        switch (actualScene)
        {
            case 0:
                MainMenu(2);
                break;

            //add as much scenes (cases) as you need
            case 1:
                
                break;

            default:
                //show error scene or something idk haha
                ErrorScene(0);
        }
        
    }

    UnloadTexture(mouseTexture);
    
    UnloadScene(actualScene);
    
    CloseWindow();
    
    return 0;
}

void LoadScene(unsigned int scene)
{
    switch (scene)
    {
        case 0:
            LoadMainMenu();
            break;
        
        case 1:
            //Unload the scene you love <3
            break;
        
        default:
            LoadErrorScene();
            break;
    }
    
    actualScene = scene;
}

void UnloadScene(unsigned int scene)
{
    switch (scene)
    {
        case 0:
            UnloadMainMenu();
            break;
        
        case 1:
            //Unload the scene you love <3
            break;
        
        default:
            UnloadErrorScene();
            break;
    }
}

void ChangeScene(unsigned int scene)
{
    UnloadScene(actualScene);
    LoadScene(scene);
}