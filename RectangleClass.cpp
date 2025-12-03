

#include "RectangleClass.h"
#include <iostream>
using namespace std;

// const
Rectangle::Rectangle(float side1,float side2):Geoshape(side1,side2)  // Call the parent (GeoShape) constructor first and give it base + height
{
    cout<<"Rectangle is Created"<<endl;
}
// area

float Rectangle::calculateArea()
{
    return dimension1*dimension2;
}

// dest
Rectangle::~Rectangle()
{
    cout<<"Rectangle is dead"<<endl;
}

