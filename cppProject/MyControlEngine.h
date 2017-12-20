#pragma once
#include "Engine.h"
#include "Boat.h"
#include "Star.h"

class MyControlEngine:public ControlEngine {
    std::vector<Boat *> *boats;
    std::vector<Star *> *stars;
public:
    MyControlEngine(std::vector<Boat * > * boats_, std::vector<Star * > * stars_):boats(boats_),stars(stars_){}
   
    virtual void MouseCallback(int button, int state, int x, int y) ;
};
;
