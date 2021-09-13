    ////////// TO DO ///////////
    //                        //
    //  add to the Buttonconf //
    //  struct a members to   //
    //  allow add text on top //
    //  of the texture and    //
    //  implement it on the   //
    //    ButtonEx function:  //
    //                        //
    //  - Font font;          //
    //  - int fontsize;       //
    //  - const char *text    //
    //                        //
    //  maybe?:               //
    //                        //
    //  - Vector2 textpos     //
    //                        //
    ////////////////////////////

typedef struct buttonConf{
    Color colorIdle;
    Color colorFocussed;
    Color colorPressed;
    Texture2D texture;
} buttonConf;

bool ButtonEx(Rectangle sprite, Rectangle hitbox, buttonConf config);
void UnloadButtonConf(buttonConf config);