#include "MyControlEngine.h"

void MyControlEngine::MouseCallback(int button, int state, int x, int y){
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
        boats->push_back(new Boat((x-400) / 400.f, (y-300)/ -300.f, 0.05f, 2));
        
    }
}
