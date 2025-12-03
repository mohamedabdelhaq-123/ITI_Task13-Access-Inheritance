#include <iostream>
#include "Geoshape.h"
using namespace std;
//const
Geoshape::Geoshape(float dimension1,float dimension2)
{
    this->dimension1=dimension1;
    this->dimension2=dimension2;
    cout<<"Geo is Created"<<endl;
}
//copy const

// area
float Geoshape::calculateArea()  // to be inherited
{
    return 0;
}

// getters
float Geoshape::getDimension1(void)
{
    return this->dimension1;
}

float Geoshape::getDimension2(void)
{
    return this->dimension2;
}

// setters
void Geoshape::setDimension1(float dimension1)
{
    if(dimension1>0)
    {
        this->dimension1=dimension1;
    }
    else
    {
        cout<<"Wrong Dimension 1 Value"<<endl;
    }
}

void Geoshape::setDimension2(float dimension2)
{
    if(dimension2>0)
    {
        this->dimension2=dimension2;
    }
    else
    {
        cout<<"Wrong Dimension 2 Value"<<endl;
    }
}

// display
void Geoshape::geoshapeDimensionsDisplay(void)
{
    cout<<"Dimension 1 = "<< this->dimension1<<endl;
    cout<<"Dimension 2 = "<< this->dimension2<<endl;
}

// dest
Geoshape::~Geoshape()
{
    cout<<"Geoshape is Dead"<<endl;
}

