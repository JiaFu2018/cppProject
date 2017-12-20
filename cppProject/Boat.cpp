//
//  Boat.cpp
//  cppProject
//
//  Created by 符佳 on 20/12/2017.
//  Copyright © 2017 符佳. All rights reserved.
//

#include "Boat.h"

void Boat::draw(){    
    //GraphicPrimitives::drawFillRect2D(posX,posY,width,height,R,G,B);
    
    GraphicPrimitives::drawFillTriangle2D(boatX, boatY - boatSize * boatType, boatX, boatY + boatSize * boatType, boatX + boatSize * boatType, boatY, 1.0f, 0.0f, 1.0f);
}

void Boat::tick(){}
