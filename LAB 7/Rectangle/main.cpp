#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
    Rectangle rectangle;
    double length;
    double width;

    cout << "Input a length for the rectangle: " << endl;
    cin >> length;
    rectangle.setLength(length);

    cout << endl;

    cout << "Input a width for the rectangle: " << endl;
    cin >> width;
    rectangle.setWidth(width);

    cout << endl;

    cout << "Length: " << rectangle.getLength() << endl;
    cout << "Width: " << rectangle.getWidth() << endl;

    cout << endl;

    cout << "The area of the rectangle is: " << rectangle.getArea() << endl;

    return 0;
}