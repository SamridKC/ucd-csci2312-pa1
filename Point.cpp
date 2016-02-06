//
// Created by Samrid on 2/5/2016.
//

#include <cmath>

#include "Point.h"

Point::Point() {
    x = 0.0;
    y = 0.0;
    z = 0.0;
}

Point::Point(double initX, double initY, double initZ) {
    x = initX;
    y = initY;
    z = initZ;
}

Point::~Point() {

}

void Point::setX(double newX) {
    x = newX;
}

void Point::setY(double newY) {
    y = newY;
}

void Point::setZ(double newZ) {
    z = newZ;
}

double Point::getX() const {
    return x;
}

double Point::getY() const {
    return y;
}

double Point::getZ() const {
    return z;
}

// Function to calculate the distance between two points.
double Point::distanceTo(const Point &dist) const {
    return sqrt(pow(dist.getX()-(x),2) + (pow(dist.getY()-(y),2)) + (pow(dist.getZ()-(z),2)));
}
