//
//  Star.h
//  cppProject
//
//  Created by 符佳 on 20/12/2017.
//  Copyright © 2017 符佳. All rights reserved.
//

#pragma once
#include "GraphicPrimitives.h"

class Star {
    
public:

    float starX, starY, R;
    
    Star(float starX, float starY, float R){
        starX = 0.9f;
        starY = 0.4f;
        R = 0.02f;
    }
    
    void draw();
    void tick();
    
};
