//
// Created by Samrid on 2/5/2016.
//

#include <cmath>

#include "Point.h"

//************************************************************************
// computeArea returns the area of the triangle using Heron's formula
// computeArea takes by reference three Point objects and computes
// the area.
//************************************************************************

double computeArea(const Point &a, const Point &b, const Point &c)
{
    double d1, d2, d3, semiP;

    d1 = a.distanceTo(b);
    d2 = b.distanceTo(c);
    d3 = c.distanceTo(a);

    semiP = (d1 + d2 + d3) / 2;

    return sqrt(semiP * (semiP - d1) * (semiP - d2) * (semiP - d3));

}


