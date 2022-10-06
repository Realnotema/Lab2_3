#ifndef _TRACTRIX_H
#define _TRACTRIX_H
#include <iostream>

namespace ns {
    struct Coordinate {
        int x;
        int y;
        Coordinate(double x = 0, double y = 0): x(x), y(y) {};
    };

    class Traktrix {
    private:
        double a;
    public:
        Traktrix(double a = 1): a(a) {};

        Coordinate intersection() const;
        double length() const;
        double radius() const;
        double firstSquare() const;
        double secondSquare() const;
        double volume() const;
    };
}

#endif //_TRACTRIX_H
