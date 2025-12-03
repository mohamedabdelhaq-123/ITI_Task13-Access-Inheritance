#ifndef SQUARECLASS_H_INCLUDED
#define SQUARECLASS_H_INCLUDED

#include "RectangleClass.h"


class Square: private Rectangle{

    public:
    // const
    Square(float side=1.0f);

    // area
    float calculateArea();

    float getSide(void);

    void setSide(float userSide);

    // dest
    ~Square();
};



#endif // TRIANGLECLASS_H_INCLUDED


