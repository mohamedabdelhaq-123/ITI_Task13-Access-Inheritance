
#include "CircleClass.h"
#include <iostream>
using namespace std;

// const
Circle::Circle(float radius):Geoshape(radius,radius)  // Call the parent (GeoShape) constructor first and give it base + height
{
    cout<<"Circle is Created"<<endl;
}
// area

float Circle::calculateArea(void)
{
    return 3.14*(dimension1*dimension1);
}

float Circle::getRadius(void)
{
    return dimension1;
}

void Circle::setRadius(float userRadius)
{
    dimension1=userRadius;
    dimension2=userRadius;
}

// dest
Circle::~Circle()
{
    cout<<"Circle is dead"<<endl;
}


