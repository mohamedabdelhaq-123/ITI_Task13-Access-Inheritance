

#include "TriangleClass.h"
#include <iostream>
using namespace std;

// const
Triangle::Triangle(float base,float height):Geoshape(base,height)  // Call the parent (GeoShape) constructor first and give it base + height
{
    // d1 = base;     // d1 came from GeoShape
    // d2 = height;   // d2 came from GeoShape
    cout<<"Triangle is Created"<<endl;
}
// area

float Triangle::calculateArea()
{
    return 0.5*dimension1*dimension2;
}

// dest
Triangle::~Triangle()
{
    cout<<"Triangle is dead"<<endl;
}
