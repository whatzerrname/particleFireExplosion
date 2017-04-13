//
//  Particle.hpp
//  particleFireExplosion
//
//  Created by Ashley Berthon on 08/04/2017.
//  Copyright © 2017 Ashley Berthon. All rights reserved.
//

#ifndef Particle_hpp
#define Particle_hpp

#include <stdio.h>

namespace caveofprogramming {
    struct Particle {
        double m_x;
        double m_y;
        
    public:
        Particle();
        virtual ~Particle();
    };
    
} /* namespace caveofprogramming */

#endif /* Particle_hpp */
