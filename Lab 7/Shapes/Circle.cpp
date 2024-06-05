#include "Circle.h"
#include <cmath>

namespace shapes {
    Circle::Circle() : radius(0) {}
    Circle::Circle(double r) : radius(r) {}
    Circle::~Circle() {}
    double Circle::getRadius() const { return radius; }
}
