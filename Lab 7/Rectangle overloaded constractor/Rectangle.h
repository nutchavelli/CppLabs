#pragma once

class Rectangle {
private:
    float length;
    float width;

public:
    Rectangle(); 
    Rectangle(float len, float wid);
    ~Rectangle(); 
    void setLength(float len); 
    void setWidth(float wid); 
    float getLength(); 
    float getWidth(); 
    float calculateArea();
};
