#include <iostream>
#include "Tractrix.h"
#include <cmath>


using namespace ns;

Coordinate Traktrix::intersection(double angle) const {
    Coordinate coordinate;
    coordinate.x = a*(log(tan(angle/2)) + cos(angle));
    coordinate.y = a*sin(angle);
    return coordinate;
}

double ctg (double angle) {
    return pow (1./tan((double)angle), 2);
}

double Traktrix::length(double angle) const { return -a*log(sin(angle)); }

double Traktrix::radius(double angle) const { return a * ctg(angle); }

double Traktrix::firstSquare(double angle) const { return (angle*a*a)/2; }

double Traktrix::secondSquare(double angle) const { return 4*angle*a*a; }

double Traktrix::volume(double angle) const { return (2/3)*angle*a*a*a; }
