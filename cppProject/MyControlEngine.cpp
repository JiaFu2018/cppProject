#include "MyControlEngine.h"

void MyControlEngine::MouseCallback(int button, int state, int x, int y){
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
        float mouseX = (x - 400) / 400.f;
        float mouseY = (y - 300) / -300.f;

        Setting* s = Setting::getInstance();
        if(mouseX >= -1.0f && mouseX < 0.7f && mouseY >= -0.5f && mouseY < 0.5f){
            // add boats
            if(s->getBoatX(mouseX) != -9.99f && s->getBoatY(mouseY) != -9.99f)
            {
                boats->push_back(new Boat(s->getBoatX(mouseX), s->getBoatY(mouseY), 0.05f, 2));
            }
        }else if(mouseX >= 0.38f && mouseX < 0.68f && mouseY >= -0.8f && mouseY < -0.65f){
            // init random stars
            srand((unsigned)time(NULL));
            for(int i = 1; i < 20; i ++){
                float x = 1 + rand() / float(RAND_MAX) * 8;
                float y = (rand() % 4 - 1.5f) / 4;
                stars->push_back(new Star(x, y, 0.02f, 0.003f));
            }
        }else if(mouseX >= -0.88f && mouseX < -0.73f && mouseY >= -0.8f && mouseY < -0.63f){
            s->drawButtonChosen(mouseX, mouseY, "boatA");
        }else if(mouseX >= -0.68f && mouseX < -0.53f && mouseY >= -0.8f && mouseY < -0.63f){
            s->drawButtonChosen(mouseX, mouseY, "boatB");
        }else if(mouseX >= -0.48f && mouseX < -0.33f && mouseY >= -0.8f && mouseY < -0.63f){
            s->drawButtonChosen(mouseX, mouseY, "boatC");
        }
        
        

    }
}
