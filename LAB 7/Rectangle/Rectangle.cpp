#include "Rectangle.h"


Rectangle::Rectangle()
{
    length = 0.0;
    width = 0.0;
}

void Rectangle::setLength(double newLength)
{
    length = newLength;
}

void Rectangle::setWidth(double newWidth)
{
    width = newWidth;
}

double Rectangle::getLength()
{
    return length;
}

double Rectangle::getWidth()
{
    return width;
}

double Rectangle::getArea()
{
    return length * width;
}

Rectangle::~Rectangle() {} 