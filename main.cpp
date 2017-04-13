//
//  main.cpp
//  particleFireExplosion
//
//  Created by Ashley Berthon on 29/03/2017.
//  Copyright © 2017 Ashley Berthon. All rights reserved.
//

#include <iostream>
#include <SDL2/SDL.h>
#include "Screen.hpp"
using namespace std;
using namespace caveofprogramming;

int main() {

    Screen screen;
    
    if(screen.init() == false) {
        cout << "Error initialising SDL." << endl;
    }
    
    while (true) {
        // Update particles
        
        // Draw particles
        // Draw particles
        int elapsed = SDL_GetTicks();
        unsigned char green = (unsigned char)((1 + sin(elapsed * 0.0001)) * 128);
        unsigned char red = (unsigned char)((1 + sin(elapsed * 0.0002)) * 128);
        unsigned char blue = (unsigned char)((1 + sin(elapsed * 0.0003)) * 128);
        
        for(int y=0; y < Screen::SCREEN_HEIGHT; y++) {
            for(int x=0; x < Screen::SCREEN_WIDTH; x++) {
                screen.setPixel(x, y, red, green, blue);
            }
        }
                
        // Draw the screen
        screen.update();
        
        // Check for messages/events
        if(screen.processEvents() == false) {
            break;
        }
    }
    
    screen.close();
    
    return 0;
}
