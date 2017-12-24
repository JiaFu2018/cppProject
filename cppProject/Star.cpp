//
//  Star.cpp
//  cppProject
//
//  Created by 符佳 on 20/12/2017.
//  Copyright © 2017 符佳. All rights reserved.
//

#include "Star.h"

void Star::draw(){    
    drawMultiType(1.0f, 1.0f, 0.0f);


}

void Star::tick(){
    starX -= starSpeed;
}

void Star::drawMultiType(float starR, float starG, float starB){
    const double PI = acos(0.) * 2;
    double L1=starRadius*cos(36*PI/180);
    double L2=starRadius*sin(36*PI/180);
    double L3=starRadius*cos(72*PI/180);
    double L4=starRadius*sin(72*PI/180);
    double L5=L2*tan(72*PI/180);
    double L6=L2/cos(72*PI/180);
    double L7=L6*sin(54*PI/180);
    double L8=L6*cos(54*PI/180)+starRadius;
    
    glBegin(GL_POLYGON);     // set drawing type
    
    glColor3f(starR, starG, starB);
    glVertex2f(starX,starY);
    glVertex2f(starX,starY+L5+L1);    // point 1
    glVertex2f(starX+L2,starY+L1);    // point 2
    glVertex2f(starX+L2+L6,starY+L1); // point 3
    glVertex2f(starX+L4,starY-L3);    // point 4
    glVertex2f(starX+L7,starY-L8);    // point 5
    glVertex2f(starX,starY-starRadius);    // point 6
    glVertex2f(starX-L7,starY-L8);    // point 7
    glVertex2f(starX-L4,starY-L3);    // point 8
    glVertex2f(starX-L2-L6,starY+L1); // point 9
    glVertex2f(starX-L2,starY+L1);    // point 10
    glVertex2f(starX,starY+L5+L1);
    glEnd();
    glFlush();
}
void initStars(){

    
}
// stars type : color, speed, energy,
void getStarInfo(int starType){
    
}




