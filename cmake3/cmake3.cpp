#include <iostream>
#include "SDL.h"
#include "SDL_main.h"

using namespace std;

int main(int argc, char *argv[])  
{  
	if(argc <2){
		cout << "Usage: cmake3.exe demo.bmp" << endl;  
        return 1;
	}
	
    //Start SDL    
    if (SDL_Init(SDL_INIT_VIDEO) != 0)  
    {  
        cout << "SDL_Init Error: " << SDL_GetError() << endl;  
        return 1;  
    }  
      
    SDL_Window *win = SDL_CreateWindow("Hello World!", 100, 100, 871, 564, SDL_WINDOW_SHOWN);  
    if (win == nullptr)  
    {  
        cout << "SDL_CreateWindow Error: " << SDL_GetError() << endl;  
        return 1;  
    }  
      
    SDL_Renderer *ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED|SDL_RENDERER_PRESENTVSYNC);  
    if (ren == nullptr)  
    {  
        cout << "SDL_CreateRenderer Error: " << SDL_GetError() << endl;  
        return 1;  
    }  
      
    SDL_Surface *bmp = SDL_LoadBMP(argv[1]);  
    if (bmp == nullptr)  
    {  
        cout << "SDL_LoadBMP Error: " << SDL_GetError() << endl;  
        return 1;  
    }  
      
    SDL_Texture *tex = SDL_CreateTextureFromSurface(ren, bmp);  
    SDL_FreeSurface(bmp);  
    if (tex == nullptr)  
    {  
        cout << "SDL_CreateTextureFromSurface Error: " << SDL_GetError() << endl;  
        return 1;  
    }  
      
    SDL_RenderClear(ren);  
    SDL_RenderCopy(ren, tex, NULL, NULL);  
    SDL_RenderPresent(ren);  
      
    SDL_Delay(20000);  
      
    SDL_DestroyTexture(tex);  
    SDL_DestroyRenderer(ren);  
    SDL_DestroyWindow(win);  
    //Quit SDL    
    SDL_Quit();   
    return 0;  
}  