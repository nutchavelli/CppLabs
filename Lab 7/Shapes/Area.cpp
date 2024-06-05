#include "Area.h"
#include <cmath>

double Area::calculateSquareArea(const shapes::Square& square) {
    double sideLength = square.getSideLength();
    return sideLength * sideLength;
}

double Area::calculateTriangleArea(const shapes::Triangle& triangle) {
    double base = triangle.getBase();
    double height = triangle.getHeight();
    return 0.5 * base * height;
}

double Area::calculateCircleArea(const shapes::Circle& circle) {
    double radius = circle.getRadius();
    return M_PI * radius * radius;
}
