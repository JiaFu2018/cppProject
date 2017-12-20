
#include "MyGraphicEngine.h"
#include <string.h>
using namespace std;
void MyGraphicEngine::Draw(){
    
    float x, y;
    x = -0.9f;
    y = -0.6f;
    for(int i = 0; i < 5; i++)
    {
        GraphicPrimitives::drawLine2D(x, y, -x, y, 1.0f, 0.0f, 1.0f);
        y += 0.3f;
    }
    
    for(int i = 0; i < 11; i++)
    {
        GraphicPrimitives::drawLine2D(x, -0.6f, x, 0.6f, 1.0f, 0.0f, 1.0f);
        x += 0.18f;
    }
    //GraphicPrimitives::drawText2D(str,-1.0f,0.9f,0.0f,0.0f, 1.0f);
    
    /*for (int i = 0; i < paps->size(); i++) {
        (*paps)[i]->draw();
    }
    
    
    x1 += vx1;
    if (x1 > 0.9f || x1 < -0.9f) {
        vx1 = -vx1;
        x1 += vx1;
    }
    
    x2 += vx2;
    if (x2 > 0.9f || x2 < -0.9f) {
        vx2 = -vx2;
        x2 += vx2;
    }*/
    
}
