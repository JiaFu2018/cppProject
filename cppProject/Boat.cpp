//
//  Boat.cpp
//  cppProject
//
//  Created by 符佳 on 20/12/2017.
//  Copyright © 2017 符佳. All rights reserved.
//

#include "Boat.h"

void Boat::draw(){
    
    GraphicPrimitives::drawFillRect2D(posX,posY,width,height,R,G,B);
}
