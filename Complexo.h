#include <math.h>

class Complexo
{

private :

    float real , im ;

public :

    Complexo ( float x, float y)
    {
        real = x;
        im = y;
    }

    float Modulo();
    Complexo Conjugado();
    Complexo operator+(Complexo);
    Complexo operator-(Complexo);
    Complexo operator*(Complexo);
    Complexo operator/(Complexo);
};
