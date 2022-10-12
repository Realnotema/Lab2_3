#include <iostream>
#include "Tractrix.h"
#include <cmath>

#define pi 3.14159265

     using namespace ns;

     Coordinate Traktrix::intersection(double angle) const {
         Coordinate coordinate;
         coordinate.x = a * (log(tan((angle * pi/180) / 2)) + cos(angle * pi/180));
         coordinate.y = a * sin(angle * pi/180);
         return coordinate;
     }

     double ctg(double angle) {
         return pow(1. / tan((double) angle), 2);
     }

     double Traktrix::length(double angle) const { return -a * log(sin(angle * pi/180)); }

     double Traktrix::radius(double angle) const { return a * ctg(angle * pi/180); }

     double Traktrix::firstSquare(double angle) const { return (angle * pi/180 * a * a) / 2; }

     double Traktrix::secondSquare(double angle) const { return 4 * angle * pi/180 * a * a; }

     double Traktrix::volume(double angle) const { return (2 / 3) * angle * pi/180 * a * a * a; }
