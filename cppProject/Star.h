//
//  Star.h
//  cppProject
//
//  Created by 符佳 on 20/12/2017.
//  Copyright © 2017 符佳. All rights reserved.
//

#pragma once
#include <vector>
#include "GraphicPrimitives.h"


class Star {
public:
    
    Star(float starX_ = 0.0f, float starY_ = 0.0f, float starRadius_ = 0.02f, float starSpeed_ = 0.01f, int starEnergy_ = 3):starX(starX_),starY(starY_),starRadius(starRadius_),starSpeed(starSpeed_),starEnergy(starEnergy_){}
    
    float starX, starY, starRadius, starSpeed;
    float starR, starG, starB;
    int starsNum, starType, starEnergy;
    
    void draw();
    void tick();
    void drawMultiType(float starR, float starG, float starB);
    void getStarInfo(int starType);
    void initStars(int starNum);
};
