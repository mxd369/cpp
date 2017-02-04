//
//  main.cpp
//  SDL Tutorial
//
//  Created by MXD on 2/12/16.
//  Copyright © 2016 MXD. All rights reserved.
//

#include <iostream>
#include <SDL2/SDL.h>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Hello, World!\n";
    
    SDL_Init(SDL_INIT_EVERYTHING);
    if ((SDL_INIT_EVERYTHING) > 0)
    {
        cout << "SDL Works!\n";
    }
    
    //create window
    SDL_Window *window;
    
    window = SDL_CreateWindow("SDL Window 1.0", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1000, 720, SDL_WINDOW_RESIZABLE);
    
    SDL_Delay(15000);

    return 0;
}
