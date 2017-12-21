//
//  Star.cpp
//  cppProject
//
//  Created by 符佳 on 20/12/2017.
//  Copyright © 2017 符佳. All rights reserved.
//

#include "Star.h"

void Star::draw(){    
    //GraphicPrimitives::drawFillRect2D(posX,posY,width,height,R,G,B);

    const double PI = acos(0.) * 2;
    double L1=starR*cos(36*PI/180);
    double L2=starR*sin(36*PI/180);
    double L3=starR*cos(72*PI/180);
    double L4=starR*sin(72*PI/180);
    double L5=L2*tan(72*PI/180);
    double L6=L2/cos(72*PI/180);
    double L7=L6*sin(54*PI/180);
    double L8=L6*cos(54*PI/180)+starR;
    
    glBegin(GL_POLYGON);     // set drawing type
    
    glColor3f(1.0f,1.0f,0.0f);
    glVertex2f(starX,starY);
    glVertex2f(starX,starY+L5+L1);    // point 1
    glVertex2f(starX+L2,starY+L1);    // point 2
    glVertex2f(starX+L2+L6,starY+L1); // point 3
    glVertex2f(starX+L4,starY-L3);    // point 4
    glVertex2f(starX+L7,starY-L8);    // point 5
    glVertex2f(starX,starY-starR);        // point 6
    glVertex2f(starX-L7,starY-L8);    // point 7
    glVertex2f(starX-L4,starY-L3);    // point 8
    glVertex2f(starX-L2-L6,starY+L1); // point 9
    glVertex2f(starX-L2,starY+L1);    // point 10
    glVertex2f(starX,starY+L5+L1);
    glEnd();
    glFlush();

}

void Star::tick(){
    starX -= starSpeed;
    if (starX < -1.0f) {
        starX = 1.0f;
    }
    
}




