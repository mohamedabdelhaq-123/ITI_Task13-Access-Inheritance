#ifndef CIRCLECLASS_H_INCLUDED
#define CIRCLECLASS_H_INCLUDED

#include "Geoshape.h"
class Circle: private Geoshape{

    public:
    // const
    Circle(float radius);
    //Triangle(float base,float height):Geoshape(base,height);
    // area
    float calculateArea();

    float getRadius(void);

    void setRadius(float userRadius);

    // dest
    ~Circle();
};



#endif // TRIANGLECLASS_H_INCLUDED

