#include "MyGameEngine.h"

void MyGameEngine::idle(){
    for (int i = 0; i < boats->size(); i++) {
        (*boats)[i]->tick(*stars);
        //(*boats)[i]->tick(*stars);
    }
    
    for (int i = 0; i < stars->size(); i++) {
        (*stars)[i]->tick();
    }
}
