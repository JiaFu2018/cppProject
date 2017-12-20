#pragma once
#include "Engine.h"
#include "GraphicPrimitives.h"
#include "Papillon.h"

class MyGraphicEngine:public GraphicEngine {
    
    std::vector<Papillon * > *paps;
//    std::vector<Boat * > *boats;
//    std::vector<Star * > *stars;
    
    char * str;
public:
    
    MyGraphicEngine(std::vector<Papillon * > * paps_):paps(paps_){}
    
    float x,y;
    
    virtual void Draw();
    
};
