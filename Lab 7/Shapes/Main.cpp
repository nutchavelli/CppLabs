#include <iostream>
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"
#include "Area.h"
using namespace std;

int main() {
    int choice;
    bool quit = false;

    while (!quit) {
    
        cout << "1. Calculate the area of a square" << endl;
        cout << "2. Calculate the area of a triangle" << endl;
        cout << "3. Calculate the area of a circle" << endl;
        cout << "4. Quit" << endl;
        cout << "Enter your choice: " << endl;
        cin >> choice;

        switch (choice) {
            case 1: {
                double sideLength;
                cout << "Enter side length of the square: " << endl;
                cin >> sideLength;
                shapes::Square square(sideLength);
                cout << "Square area: " << Area::calculateSquareArea(square) << endl;
                break;
            }
            case 2: {
                double base, height;
                cout << "Enter base of the triangle: " <<endl;
                cin >> base;
                cout << "Enter height of the triangle: " << endl;
                cin >> height;
                shapes::Triangle triangle(base, height);
                cout << "Triangle area: " << Area::calculateTriangleArea(triangle) << endl;
                break;
            }
            case 3: {
                double radius;
                cout << "Enter radius of the circle: " << endl;
                cin >> radius;
                shapes::Circle circle(radius);
                cout << "Circle area: " << Area::calculateCircleArea(circle) << endl;
                break;
            }
            case 4:
                cout << "Exiting the program. Goodbye!" << endl;
                quit = true;
                break;
            default:
                cout << "Invalid choice! Please select again." << endl;
        }
    }

    return 0;
}
