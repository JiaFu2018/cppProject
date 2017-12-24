#include "MyControlEngine.h"

void MyControlEngine::MouseCallback(int button, int state, int x, int y){
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
        // add boats
        boats->push_back(new Boat(setting.getBoatX(x), setting.getBoatY(y), 0.05f, 2));
        
        // init random stars
        srand((unsigned)time(NULL));
        for(int i = 1; i < 20; i ++){
            float x = 1 + rand() / float(RAND_MAX) * 8;
            float y = (rand() % 4 - 1.5f) / 4;
            stars->push_back(new Star(x, y, 0.02f, 0.003f));
        }
    }
}
