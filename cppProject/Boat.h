//
//  Boat.h
//  cppProject
//
//  Created by 符佳 on 20/12/2017.
//  Copyright © 2017 符佳. All rights reserved.
//
#pragma once
#include "GraphicPrimitives.h"

class Boat {
    
public:

    Boat(float boatX_ = 0.0f,float boatY_ = 0.0f, float boatSize_ = 0.05f, int boatType_ =2):
    boatX(boatX_),
    boatY(boatY_),
    boatSize(boatSize_),
    boatType(boatType_){}
    
    float boatX, boatY, boatSize;
    int boatType;
    
    void draw();
    void tick();
};
