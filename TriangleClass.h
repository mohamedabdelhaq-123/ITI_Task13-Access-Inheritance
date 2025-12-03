#ifndef TRIANGLECLASS_H_INCLUDED
#define TRIANGLECLASS_H_INCLUDED

#include "Geoshape.h"
class Triangle: public Geoshape{

    public:
    // const
    Triangle(float base,float height);
    //Triangle(float base,float height):Geoshape(base,height);
    // area
    float calculateArea();

    // dest
    ~Triangle();
};



#endif // TRIANGLECLASS_H_INCLUDED
