#pragma once
#include "Engine.h"
#include "GraphicPrimitives.h"
#include "Boat.h"
#include "Star.h"

class MyGraphicEngine:public GraphicEngine {
    std::vector<Boat *> *boats;
    std::vector<Star *> *stars;
public:
    
    float x,y;
    MyGraphicEngine(std::vector<Boat * > * boats_, std::vector<Star * > * stars_):boats(boats_),stars(stars_){}
    
    virtual void Draw();
    void drawChessboard();
    
};
