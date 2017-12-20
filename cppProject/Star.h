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
    Star(float posX_ = 0.0f,float posY_ = 0.0f):posX(posX_),posY(posY_),width(0.1f),height(0.1f),VposX(0.01f),VposY(0.02f),Vwidth(0.01f),Vheight(-0.02f), R (1.0f), G(0.0f), B(1.0f){}
    
    float posX,posY,width,height;
    float VposX,VposY,Vwidth,Vheight;
    float R,G,B;
    
    void draw();
    void tick();
    
};
