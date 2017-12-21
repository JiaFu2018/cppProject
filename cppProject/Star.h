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
    
    Star(float starX_ = 0.0f, float starY_ = 0.0f, float starR_ = 0.02f, float starSpeed_ = 0.01f):starX(starX_),starY(starY_),starR(starR_),starSpeed(starSpeed_){}
    
    float starX, starY, starR, starSpeed;
    int starType, starEnergy;
    
    void draw();
    void tick();
    
};
