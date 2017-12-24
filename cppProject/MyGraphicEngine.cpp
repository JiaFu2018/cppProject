#include "MyGraphicEngine.h"
#include <string.h>
using namespace std;
void MyGraphicEngine::Draw(){
    
    // draw game info and chessboard
    Setting::getInstance()->draw();
    
    // drawing boats
    for (int i = 0; i < boats->size(); i++) {
        (*boats)[i]->draw();
    }
    
    // stars flying
    for (int i = 0; i < stars->size(); i++) {
        if((*stars)[i]->starX < -1.0f) (*stars).erase((*stars).begin() + i);
        (*stars)[i]->draw();
    }
}







