#include "Square.h"

namespace shapes {
    Square::Square() : sideLength(0) {}
    Square::Square(double length) : sideLength(length) {}
    Square::~Square() {}
    double Square::getSideLength() const { return sideLength; }
}
