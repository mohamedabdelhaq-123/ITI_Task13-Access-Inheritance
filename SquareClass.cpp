#include <iostream>

#include "RectangleClass.h"
#include "SquareClass.h"
using namespace std;

Square::Square(float side):Rectangle(side,side)
{
    cout<<"Square Created"<<endl;
}
// area
float Square::calculateArea()
{
    return dimension1*dimension1;   // won't work
}

float Square::getSide(void)
{
    return dimension1;
}

void Square::setSide(float userSide)
{
    dimension1=userSide;
    dimension1=userSide;
}

// dest
Square::~Square()
{
    cout<<"Square is Dead"<<endl;
}
