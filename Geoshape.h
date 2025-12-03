#ifndef GEOSHAPE_H_INCLUDED
#define GEOSHAPE_H_INCLUDED


class Geoshape{
    protected:
        float dimension1;
        float dimension2;

    public:
        //const
        Geoshape(float dimension1=1.0f,float dimension2=1.0f);
        //copy const

        // area
        float calculateArea();  // to be inherited

        // getters
        float getDimension1(void);

        float getDimension2(void);

        // setters
        void setDimension1(float dimension1);
        void setDimension2(float dimension2);

        // display
        void geoshapeDimensionsDisplay(void);

        // dest
        ~Geoshape();






};


#endif // GEOSHAPE_H_INCLUDED
