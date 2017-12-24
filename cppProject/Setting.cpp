//
//  Setting.cpp
//  cppProject
//
//  Created by 符佳 on 20/12/2017.
//  Copyright © 2017 符佳. All rights reserved.
//
#include <sstream>
#include "Setting.h"


void Setting::draw(){
    drawSysInfo(level, coin, starNum);
    drawChessboard();
}

void Setting::drawSysInfo(int level, int coin, int starNum){
    char c[20];
    std::string titleLevel = "Level";
    GraphicPrimitives::drawText2D(strcpy(c,titleLevel.c_str()), -0.78f, 0.85f, 1, 1, 0);
    std::ostringstream sLevel;
    sLevel<<level;
    GraphicPrimitives::drawText2D(strcpy(c,sLevel.str().c_str()), -0.78f, 0.75f, 1, 1, 0);
    
    std::string titleCoin = "Coins";
    GraphicPrimitives::drawText2D(strcpy(c,titleCoin.c_str()), -0.18f, 0.85f, 1, 1, 0);
    std::ostringstream sCoin;
    sCoin<<coin;
    GraphicPrimitives::drawText2D(strcpy(c,sCoin.str().c_str()), -0.18f, 0.75f, 1, 1, 0);
    
    std::string titleStar = "Stars Num";
    GraphicPrimitives::drawText2D(strcpy(c,titleStar.c_str()), 0.48f, 0.85f, 1, 1, 0);
    std::ostringstream sStarNum;
    sStarNum<<starNum;
    GraphicPrimitives::drawText2D(strcpy(c,sStarNum.str().c_str()), 0.48f, 0.75f, 1, 1, 0);
}

void Setting::drawChessboard(){
    float lineX = -1.0f;
    float lineY = -0.75f;
    int numH = 5;
    int numV = 11;
    // drawing horizontal lines
    for(int i = 0; i < numH; i++)
    {
        lineY += 0.25f;
        GraphicPrimitives::drawLine2D(lineX, lineY, -lineX - 0.3f, lineY, 1.0f, 0.0f, 1.0f);
    }
    
    // drawing vertical lines
    for(int i = 0; i < numV; i++)
    {
        GraphicPrimitives::drawLine2D(lineX, -lineY, lineX, lineY, 1.0f, 0.0f, 1.0f);
        lineX += 0.17f;
    }
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
