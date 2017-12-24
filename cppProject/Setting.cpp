//
//  Setting.cpp
//  cppProject
//
//  Created by 符佳 on 20/12/2017.
//  Copyright © 2017 符佳. All rights reserved.
//

#include "Setting.h"

void Setting::draw(){
    
    //GraphicPrimitives::drawFillRect2D(posX,posY,width,height,R,G,B);
    
}

float Setting::getBoatX(float mouseX){
    float boatX = (mouseX - 400) / 400.f;

    if(boatX >= -1.0 && boatX < -0.83f) {
        return -0.915f;
    }else if(boatX >= -0.83f && boatX < -0.66f) {
        return -0.745f;
    }else if(boatX >= -0.66f && boatX < -0.49f) {
        return -0.575f;
    }else if(boatX >= -0.49f && boatX < -0.32f) {
        return -0.405f;
    }else if(boatX >= -0.32f && boatX < -0.15f) {
        return -0.235f;
    }else if(boatX >= -0.15f && boatX < 0.02f) {
        return 0.065f;
    }else if(boatX >= 0.02f && boatX < 0.19f) {
        return 0.105f;
    }else if(boatX >= 0.19f && boatX < 0.36f) {
        return 0.275f;
    }else if(boatX >= 0.36f && boatX < 0.53f) {
        return 0.445f;
    }else if(boatX >= 0.53f && boatX < 0.7f) {
        return 0.615f;
    }else return -9.99f;
}

float Setting::getBoatY(float mouseY){
    float boatY = (mouseY - 300) / -300.f;

    if(boatY >= -0.5f && boatY < -0.25f) {
        return -0.375f;
    }else if(boatY >= -0.25f && boatY < 0.0f) {
        return -0.125f;
    }else if(boatY >= -0.0f && boatY < 0.25f) {
        return 0.125f;
    }else if(boatY >= 0.25f && boatY < 0.5f) {
        return 0.375f;
    }else return -9.99f;
}
