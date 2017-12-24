//
//  Boat.h
//  cppProject
//
//  Created by 符佳 on 20/12/2017.
//  Copyright © 2017 符佳. All rights reserved.
//
#pragma once
#include "GraphicPrimitives.h"
#include "Setting.h"
#include "Star.h"

class Boat {
    
public:

    Boat(float boatX_,float boatY_, float boatSize_ = 0.05f, int boatType_ =2, bool newBoat_ = true):
    boatX(boatX_),
    boatY(boatY_),
    boatSize(boatSize_),
    boatType(boatType_),
    newBoat(newBoat_),
    bombX(boatX_),
    bombY(boatY_),
    bombFrequency(0.5f),
    bombSpeed(0.01f){}

    float boatX, boatY, boatSize;
    float bombX, bombY, bombFrequency, bombSpeed;
    int boatType, bombType;
    bool newBoat;
    const double PI = acos(-1.0f);
    
    void draw();
    void tick(std::vector<Star * >& stars);
    void drawBoat(int boatType);
    void drawBomb(float bombX, float bombY, int bombType, float bombFrequency, float bombSpeed);

};
