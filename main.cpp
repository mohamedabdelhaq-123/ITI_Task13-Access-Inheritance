#include <iostream>
#include "Geoshape.h"
#include "TriangleClass.h"
#include "RectangleClass.h"
#include "CircleClass.h"
#include "SquareClass.h"
using namespace std;

int main()
{
    Geoshape g(2.4,3.8);
    g.geoshapeDimensionsDisplay();

    Triangle t(4.3,5.4);
    t.geoshapeDimensionsDisplay();
    cout << "Triangle Area "<< t.calculateArea() << endl;

    Rectangle r(22.3,3.3);
    r.geoshapeDimensionsDisplay();
    cout << "Rectangle Area "<< r.calculateArea() << endl;

        Circle c(3);

   // c.geoshapeDimensionsDisplay();
    cout << "Circule Area "<< c.calculateArea() << endl;
    c.setRadius(4);
    cout << "Circule Area "<< c.getRadius() << endl;
    cout << "Circule Area "<< c.calculateArea() << endl;

            Square s(3);

   // c.geoshapeDimensionsDisplay();
   //s.
    cout << "Square Area "<< s.calculateArea() << endl;

    cout << "Square Area "<< s.calculateArea() << endl;
    cout << "Hello world!" << endl;
    return 0;
}
