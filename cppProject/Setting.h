//
//  Setting.h
//  cppProject
//
//  Created by 符佳 on 20/12/2017.
//  Copyright © 2017 符佳. All rights reserved.
//

#pragma once
#include "GraphicPrimitives.h"
#include "Boat.h"

class Setting {

public:
    static Setting* getInstance(){
        static Setting instance;
        return &instance;
    };
    
//    Setting(int level_ = 1, int coin_ = 0, int starNum_ = 20):
//    level(level_),
//    coin(coin_),
//    starNum(starNum_){}
    
    const char *c_str();
    int level = 1;
    int starNum = 20;
    int coin = 0;

    std::string buttonStatus;
    
    void draw();
    void drawSysInfo(int level, int coin, int starNum);
    void drawChessboard();
    void drawButton(float buttonX, float buttonY, std::string buttonType);
    void drawButtonChosen(float buttonX, float buttonY, std::string buttonStatus);
    float getBoatX(float mouseX);
    float getBoatY(float mouseY);
    
private:
    Setting(){};
    ~Setting(){}
};
