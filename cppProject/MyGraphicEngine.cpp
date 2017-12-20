
#include "MyGraphicEngine.h"
#include "math.h"
#include <string.h>
using namespace std;
void MyGraphicEngine::Draw(){
    
    /* ------ draw lines begin ------ */
    float lineX, lineY;
    lineX = -0.9f;
    lineY = -0.9f;
    for(int i = 0; i < 5; i++)
    {
        lineY += 0.3f;
        GraphicPrimitives::drawLine2D(lineX, lineY, -lineX, lineY, 1.0f, 0.0f, 1.0f);

    }
    
    for(int i = 0; i < 11; i++)
    {
        GraphicPrimitives::drawLine2D(lineX, -lineY, lineX, lineY, 1.0f, 0.0f, 1.0f);
        lineX += 0.18f;
    }
    /* ------ draw lines end ------ */
    
    /* ------ draw boats begin ------ */
    float boatX, boatY, boatSize;
    int boatType;
    boatX = -0.85f;
    boatY = 0.15f;
    boatSize = 0.05f;
    boatType = 2;
    GraphicPrimitives::drawFillTriangle2D(boatX, boatY - boatSize * boatType, boatX, boatY + boatSize * boatType, boatX + boatSize * boatType, boatY, 1.0f, 0.0f, 1.0f);
    /* ------ draw boats end ------ */
    
    /* ------ draw stars begin ------ */
    float starX, starY;
    starX = 0.95f;
    starY = 0.45f;
    float R = 0.02f;
    const double PI = acos(0.) * 2;
    double L1=R*cos(36*PI/180);
    double L2=R*sin(36*PI/180);
    double L3=R*cos(72*PI/180);
    double L4=R*sin(72*PI/180);
    double L5=L2*tan(72*PI/180);
    double L6=L2/cos(72*PI/180);
    double L7=L6*sin(54*PI/180);
    double L8=L6*cos(54*PI/180)+R;

    glBegin(GL_POLYGON);     // set drawing type
    
    glColor3f(1.0f,1.0f,0.0f);
    glVertex2f(starX,starY);
    glVertex2f(starX,starY+L5+L1);    // point 1
    glVertex2f(starX+L2,starY+L1);    // point 2
    glVertex2f(starX+L2+L6,starY+L1); // point 3
    glVertex2f(starX+L4,starY-L3);    // point 4
    glVertex2f(starX+L7,starY-L8);    // point 5
    glVertex2f(starX,starY-R);        // point 6
    glVertex2f(starX-L7,starY-L8);    // point 7
    glVertex2f(starX-L4,starY-L3);    // point 8
    glVertex2f(starX-L2-L6,starY+L1); // point 9
    glVertex2f(starX-L2,starY+L1);    // point 10
    glVertex2f(starX,starY+L5+L1);
    glEnd();
    glFlush();
    /* ------ draw lines begin ------ */
    
    //GraphicPrimitives::drawFillTriangle2D(float x1,float y1,float x2,float y2,float x3,float y3,float r,float g, float b,float a );
    
//    GraphicPrimitives::drawText2D(str,-1.0f,0.9f,0.0f,0.0f, 1.0f); // show informations
//
//    // show papillon
//    for (int i = 0; i < paps->size(); i++) {
//        (*paps)[i]->draw();
//    }
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
