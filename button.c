#include "raylib.h"

#include "button.h"
#include "screens.h"




bool ButtonEx(Rectangle sprite, Rectangle hitbox, buttonConf config)	// hitbox is absolute, not relative
{                                                                                          
	///////////NOTES///////////
    //                       //
    //  this function should //
    //  be called inside of  //
    //  a BeginDrawing()     //
    //  function             //
    //                       //
    ///////////////////////////
    
    Color tint = config.colorIdle;
	
    if (CheckCollisionPointRec(mousePosition, hitbox))
    {
        tint = config.colorFocussed;
        if (IsMouseButtonDown(MOUSE_LEFT_BUTTON))
        {
            tint = config.colorPressed;
        }
    }
    
    DrawTextureEx(config.texture,(Vector2) {sprite.x,sprite.y},0,1, WHITE);
    
    return (IsMouseButtonReleased(MOUSE_LEFT_BUTTON) && CheckCollisionPointRec(mousePosition,hitbox));
}

void UnloadButtonConf(buttonConf config)
{
    UnloadTexture(config.texture);
}