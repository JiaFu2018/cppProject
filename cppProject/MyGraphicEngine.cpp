
#include "MyGraphicEngine.h"
#include <string.h>
using namespace std;
void MyGraphicEngine::Draw(){
    
    /* ------ draw lines begin ------ */
    float lineX, lineY;
    lineX = -1.0f;
    lineY = -0.75f;
    for(int i = 0; i < 5; i++)
    {
        lineY += 0.25f;
        GraphicPrimitives::drawLine2D(lineX, lineY, -lineX - 0.3f, lineY, 1.0f, 0.0f, 1.0f);
    }
    
    for(int i = 0; i < 11; i++)
    {
        GraphicPrimitives::drawLine2D(lineX, -lineY, lineX, lineY, 1.0f, 0.0f, 1.0f);
        lineX += 0.17f;
    }
    /* ------ draw lines end ------ */
    
    
    for (int i = 0; i < boats->size(); i++) {
        (*boats)[i]->draw();
    }
    
//    GraphicPrimitives::drawText2D(str,-1.0f,0.9f,0.0f,0.0f, 1.0f); // show informations
//
//    // lines fly
//    x1 += vx1;
//    if (x1 > 0.9f || x1 < -0.9f) {
//        vx1 = -vx1;
//        x1 += vx1;
//    }
//
//    x2 += vx2;
//    if (x2 > 0.9f || x2 < -0.9f) {
//        vx2 = -vx2;
//        x2 += vx2;
//    }
    
}
