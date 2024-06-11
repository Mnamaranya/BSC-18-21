#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
private:
    float length;
    float width;

public:
    Rectangle();

    void setLength(double);
    void setWidth(double);

    
    double getLength();
    double getWidth();
    double getArea();

    ~Rectangle();
};
#endif