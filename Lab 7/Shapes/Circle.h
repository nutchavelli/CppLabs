#pragma once

namespace shapes {
    class Circle {
    private:
        double radius;
    public:
        Circle();
        Circle(double r);
        ~Circle();
        double getRadius() const;
    };
}
