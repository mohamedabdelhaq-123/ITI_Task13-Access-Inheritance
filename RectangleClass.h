#ifndef RECTANGLECLASS_H_INCLUDED
#define RECTANGLECLASS_H_INCLUDED

#include "Geoshape.h"
class Rectangle: public Geoshape{

    public:
    // const
    Rectangle(float side1,float side2);
    //Triangle(float base,float height):Geoshape(base,height);
    // area
    float calculateArea();

    // dest
    ~Rectangle();
};



#endif // TRIANGLECLASS_H_INCLUDED

