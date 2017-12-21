//
//  Boat.cpp
//  cppProject
//
//  Created by 符佳 on 20/12/2017.
//  Copyright © 2017 符佳. All rights reserved.
//

#include "Boat.h"

void Boat::draw(){    
    GraphicPrimitives::drawFillTriangle2D(boatX, boatY - boatSize * boatType, boatX, boatY + boatSize * boatType, boatX + boatSize * boatType, boatY, 1.0f, 0.0f, 1.0f);
    drawBomb(bombX, bombY, boatType, bombFrequency, bombSpeed);
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

void Boat::tick(){
    bombX += bombSpeed;
    if (bombX > 1.0f) {
        bombX = boatX;
    }
}
