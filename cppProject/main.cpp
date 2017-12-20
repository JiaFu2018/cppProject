

#include <iostream>
#include "Engine.h"
#include "MyGraphicEngine.h"
#include "MyGameEngine.h"
#include "MyControlEngine.h"

#include "Boat.h"
#include "Setting.h"
#include "Star.h"


int main(int argc, char * argv[])
{
    
    Engine e(argc,argv);
    
    //Setting s();
    
    std::vector<Papillon *> paps;
    GraphicEngine * ge = new MyGraphicEngine(&paps);
    GameEngine * gme = new MyGameEngine(&paps);
    ControlEngine * ce = new MyControlEngine(&paps);
    
    e.setGraphicEngine(ge);
    e.setGameEngine(gme);
    e.setControlEngine(ce);
    e.start();
    return 0;
}
