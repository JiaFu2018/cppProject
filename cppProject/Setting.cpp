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

    drawSysInfo();
    drawChessboard();
    drawButton(0.38f, -0.8f, "start");
    (buttonStatus == "boatA") ? drawButtonChosen(-0.8f, -0.72f, "boatA") : drawButton(-0.8f, -0.72f, "boatA");
    (buttonStatus == "boatB") ? drawButtonChosen(-0.6f, -0.72f, "boatB") : drawButton(-0.6f, -0.72f, "boatB");
    (buttonStatus == "boatC") ? drawButtonChosen(-0.4f, -0.72f, "boatC") : drawButton(-0.4f, -0.72f, "boatC");
}

void Setting::drawSysInfo(){
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

void Setting::drawButton(float buttonX, float buttonY, std::string buttonType){
    if(buttonType == "start"){
        GraphicPrimitives::drawFillRect2D(buttonX, buttonY, 0.3f, 0.15f, 0.75f, 0.75f, 0.75f);
        char c[20];
        std::string titleButton = "start";
        GraphicPrimitives::drawText2D(strcpy(c,titleButton.c_str()), buttonX + 0.1f, buttonY + 0.06f, 0, 0, 0);
    }else if(buttonType == "pause"){
        GraphicPrimitives::drawFillRect2D(buttonX, buttonY, 0.3f, 0.15f, 0.75f, 0.75f, 0.75f);
        char c[20];
        std::string titleButton = "pause";
        GraphicPrimitives::drawText2D(strcpy(c,titleButton.c_str()), buttonX + 0.1f, buttonY + 0.06f, 0, 0, 0);
    }else{
        float x1 = buttonX - 0.05f;
        float y1 = buttonY - 0.06f;
        float x2 = x1;
        float y2 = buttonY + 0.06f;
        float x3 = buttonX + 0.05f;
        float y3 = buttonY;
        GraphicPrimitives::drawFillTriangle2D(x1, y1, x2, y2, x3, y3, 1.0f, 0.0f, 1.0f);
    }
}

void Setting::drawButtonChosen(float buttonX, float buttonY, std::string status){

    if(status == "pause")
    {
        drawButton(buttonX, buttonY, "pause");
    }else if(status == "boatA"){
        this->buttonStatus = status;
        GraphicPrimitives::drawFillRect2D(buttonX - 0.08f, buttonY - 0.08f, 0.15f, 0.17f, 0.75f, 0.75f, 0.75f);
        drawButton(buttonX, buttonY, "boatA");
    }else if(status == "boatB"){
        this->buttonStatus = status;
        GraphicPrimitives::drawFillRect2D(buttonX - 0.08f, buttonY - 0.08f, 0.15f, 0.17f, 0.75f, 0.75f, 0.75f);
        drawButton(buttonX, buttonY, "boatB");
    }else if(status == "boatC"){
        this->buttonStatus = status;
        GraphicPrimitives::drawFillRect2D(buttonX - 0.08f, buttonY - 0.08f, 0.15f, 0.17f, 0.75f, 0.75f, 0.75f);
        drawButton(buttonX, buttonY, "boatC");
    }else{
        this->buttonStatus = status;
        drawButton(buttonX, buttonY, "start");
    }
    
}

float Setting::getBoatX(float mouseX){
    if(mouseX >= -1.0 && mouseX < -0.83f) {
        return -0.915f;
    }else if(mouseX >= -0.83f && mouseX < -0.66f) {
        return -0.745f;
    }else if(mouseX >= -0.66f && mouseX < -0.49f) {
        return -0.575f;
    }else if(mouseX >= -0.49f && mouseX < -0.32f) {
        return -0.405f;
    }else if(mouseX >= -0.32f && mouseX < -0.15f) {
        return -0.235f;
    }else if(mouseX >= -0.15f && mouseX < 0.02f) {
        return -0.065f;
    }else if(mouseX >= 0.02f && mouseX < 0.19f) {
        return 0.105f;
    }else if(mouseX >= 0.19f && mouseX < 0.36f) {
        return 0.275f;
    }else if(mouseX >= 0.36f && mouseX < 0.53f) {
        return 0.445f;
    }else if(mouseX >= 0.53f && mouseX < 0.7f) {
        return 0.615f;
    }else return -9.99f;
}

float Setting::getBoatY(float mouseY){
    if(mouseY >= -0.5f && mouseY < -0.25f) {
        return -0.375f;
    }else if(mouseY >= -0.25f && mouseY < 0.0f) {
        return -0.125f;
    }else if(mouseY >= -0.0f && mouseY < 0.25f) {
        return 0.125f;
    }else if(mouseY >= 0.25f && mouseY < 0.5f) {
        return 0.375f;
    }else return -9.99f;
}

void Setting::updateCoins(int starEnergy){
    coin += starEnergy * 100;
}

void Setting::updateStarNum(int starNum_){
    starNum = starNum_;
}





