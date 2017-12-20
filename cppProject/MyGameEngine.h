#pragma once

#include "Engine.h"
#include "Boat.h"
#include "Star.h"
class MyGameEngine:public GameEngine {
    std::vector<Boat *> *boats;
    std::vector<Star *> *stars;
public:
    
    MyGameEngine(std::vector<Boat * > * boats_, std::vector<Star * > * stars_):boats(boats_),stars(stars_){}
    
    virtual void idle();
    
};
