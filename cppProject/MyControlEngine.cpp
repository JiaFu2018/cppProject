#include "MyControlEngine.h"

void MyControlEngine::MouseCallback(int button, int state, int x, int y){
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
        // add boats
        boats->push_back(new Boat((x-400) / 400.f, (y-300)/ -300.f, 0.05f, 2));
        
        // init random stars
        srand((unsigned)time(NULL));
        for(int i = 1; i < 20; i ++){
            std::cout << rand() << std::endl;
            float x = 1 + rand() / float(RAND_MAX) * 8;
            float y = (rand() % 4 - 1.5) / 4;
            stars->push_back(new Star(x, y, 0.02f, 0.003f));
        }
    }
    

    

}
