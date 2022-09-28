#ifndef _TRACTRIX_H
#define _TRACTRIX_H
#include <iostream>
#include <math.h>

// a*log((a+sqrt(a*a-y*y)/y)-sqrt(a*a-y*y)

namespace ns {
    class traktrix {
    private:
        double y;
        double a;
    public:
        Traktrix(double len = 1);
        Traktrix(double &y, double len = 1);
        Traktrix(double x, double y, double len = 1);

        double area() const { return (3.14159*a*a)/2; }
        double len() const{ return -a*log(sin(y)); }
        double rad() const{ return a*(cos(y)/sin(y)); }
        double x(double x) const;
        char *frm() const;
    };
}

#endif //_TRACTRIX_H
