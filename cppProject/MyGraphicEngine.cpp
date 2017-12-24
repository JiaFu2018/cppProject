#include "MyGraphicEngine.h"
#include <string.h>
using namespace std;
void MyGraphicEngine::Draw(){
    
    drawChessboard();
    
    // drawing boats
    for (int i = 0; i < boats->size(); i++) {
        (*boats)[i]->draw();
    }
    
    // stars flying
    for (int i = 0; i < stars->size(); i++) {
        if((*stars)[i]->starX < -1.0f) (*stars).erase((*stars).begin() + i);
        (*stars)[i]->draw();
        cout << stars->size() << endl;
    }
}

void MyGraphicEngine::drawChessboard(){
    float lineX = -1.0f;
    float lineY = -0.75f;
    int numH = 5;
    int numV = 11;
    // drawing horizontal lines
    for(int i = 0; i < numH; i++)
    {
        lineY += 0.25f;
        GraphicPrimitives::drawLine2D(lineX, lineY, -lineX - 0.3f, lineY, 1.0f, 0.0f, 1.0f);
    }
    
    // drawing vertical lines
    for(int i = 0; i < numV; i++)
    {
        GraphicPrimitives::drawLine2D(lineX, -lineY, lineX, lineY, 1.0f, 0.0f, 1.0f);
        lineX += 0.17f;
    }
}
