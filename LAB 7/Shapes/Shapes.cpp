#include "Shapes.h"

using namespace Shapes;

// default constructor
Sqaure::Sqaure()
{
    sideLength = 1;
}

// constructor
Sqaure::Sqaure(double newSideLength)
{
    sideLength = newSideLength;
}

// setter: public member functio to set the side length of the Sqaure
void Sqaure::setSideLength(double newSideLength)
{
    sideLength = newSideLength;
}

// getter: pub member function to get the side length of the square
double Sqaure::getSideLength() const
{
    return sideLength;
}

double Sqaure::getArea() const
{
    return sideLength * sideLength;
}
