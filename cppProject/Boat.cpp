//
//  Boat.cpp
//  cppProject
//
//  Created by 符佳 on 20/12/2017.
//  Copyright © 2017 符佳. All rights reserved.
//

#include "Boat.h"

void Boat::draw(){
    Setting* s = Setting::getInstance();
    if(s->buttonStatus == "boatA" && newBoat == true){
        boatType = 1;
        bombType = 1;
        bombFrequency = 0.1f;
        bombSpeed = 0.02f;
        newBoat = false;
        drawBoat(boatType);
        drawBomb(bombX, bombY, bombType, bombFrequency, bombSpeed);
    }else if(s->buttonStatus == "boatB" && newBoat == true){
        boatType = 2;
        bombType = 2;
        bombFrequency = 0.5f;
        bombSpeed = 0.01f;
        newBoat = false;
        drawBoat(boatType);
        drawBomb(bombX, bombY, bombType, bombFrequency, bombSpeed);
    }else if(s->buttonStatus == "boatC" && newBoat == true){
        boatType = 3;
        bombType = 3;
        bombFrequency = 1.5f;
        bombSpeed = 0.005f;
        newBoat = false;
        drawBoat(boatType);
        drawBomb(bombX, bombY, bombType, bombFrequency, bombSpeed);
    }else{
        drawBoat(boatType);
        drawBomb(bombX, bombY, bombType, bombFrequency, bombSpeed);
    }
}

void Boat::drawBoat(int boatType){
    float x1 = boatX - boatSize * boatType / 2;
    float y1 = boatY - boatSize * boatType / 2 ;
    float x2 = x1;
    float y2 = boatY + boatSize * boatType / 2 ;
    float x3 = boatX + boatSize * boatType /2;
    float y3 = boatY;
    GraphicPrimitives::drawFillTriangle2D(x1, y1, x2, y2, x3, y3, 1.0f, 0.0f, 1.0f);
}

void Boat::drawBomb(float bombX, float bombY, int bombType, float bombFrequency, float bombSpeed){
    
    glBegin(GL_TRIANGLE_FAN);
    int n = 50;
    for(int i=0; i <= n; i++)
    {
        glColor3f(1.0f,0.0f,0.0f);
        glVertex2f(bombX+bombType*0.02f*cos(2*PI/n*i), bombY+bombType*0.02f*sin(2*PI/n*i));
    }
    glEnd();
    glFlush();
}

void Boat::tick(std::vector<Star * >& stars){
    Setting* s = Setting::getInstance();
    // stars flying
    for (int i = 0; i < stars.size(); i++) {
        if((bombX > stars[i]->starX -0.05f) && (bombY == stars[i]->starY))
        {
            stars.erase((stars).begin() + i);
            s->updateCoins(stars[i]->starEnergy);
            s->updateStarNum(stars.size());
        }
    }
    
    bombX += bombSpeed;
    if (bombX > 1.0f) {
        bombX = boatX;
    }
}












