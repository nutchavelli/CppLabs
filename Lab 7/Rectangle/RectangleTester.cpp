#include <iostream>
#include "Rectangle.h"

using namespace std;
int main() {
    Rectangle rectangle1;
    float length, width;

    cout << "Enter length of the rectangle: ";
    cin >> length;
    cout << "Enter width of the rectangle: ";
    cin >> width;

    rectangle1.setLength(length);
    rectangle1.setWidth(width);

    cout << "Area of the rectangle: " << rectangle1.calculateArea() << endl;

    return 0;
}
