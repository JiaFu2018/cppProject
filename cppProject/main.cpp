

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
    std::vector<Boat *> boats;
    std::vector<Star *> stars;
    
    GraphicEngine * ge = new MyGraphicEngine(&boats, &stars);
    GameEngine * gme = new MyGameEngine(&boats, &stars);
    ControlEngine * ce = new MyControlEngine(&boats, &stars);
    
    e.setGraphicEngine(ge);
    e.setGameEngine(gme);
    e.setControlEngine(ce);
    e.start();
    return 0;
}
