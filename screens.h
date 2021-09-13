//////////////////////////////////////////



//////////////////////////////////////////



extern unsigned int fps;
extern unsigned int screenScale;

extern Texture2D mouseTexture;
extern Vector2 mousePosition;

extern bool exitWindow;
extern unsigned int actualScene;


void LoadScene(unsigned int scene);
void UnloadScene(unsigned int scene);
void ChangeScene(unsigned int scene);

//Functions
void LoadMainMenu();
void MainMenu(unsigned int playScene);
void UnloadMainMenu();

void LoadErrorScene();
void ErrorScene(int context);
void UnloadErrorScene();


