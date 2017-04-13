//
//  Screen.hpp
//  particleFireExplosion
//
//  Created by Ashley Berthon on 08/04/2017.
//  Copyright © 2017 Ashley Berthon. All rights reserved.
//

#ifndef Screen_hpp
#define Screen_hpp

#include <stdio.h>
#include <SDL2/SDL.h>

namespace caveofprogramming {
    class Screen {
    public:
        const static int SCREEN_WIDTH = 800;
        const static int SCREEN_HEIGHT = 600;
        
    private:
        SDL_Window *m_window;
        SDL_Renderer *m_renderer;
        SDL_Texture *m_texture;
        Uint32 *m_buffer;
        
    public:
        Screen();
        bool init();
        void update();
        void setPixel(int x, int y, Uint8 red, Uint8 green, Uint8 blue);
        bool processEvents();
        void close();
    };
} /* namespace caveofprogramming */

#endif /* Screen_hpp */
