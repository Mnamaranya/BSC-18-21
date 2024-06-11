#ifndef SHAPES_H
#define SHAPES_H

namespace Shapes
{
    class Sqaure
    {
    private:
        double sideLength;

    public:
        // default constructor
        Sqaure();

        // constructor
        Sqaure(double);

        // setter: public member functio to set the side length of the Sqaure
        void setSideLength();

        // getter: pub member function to get the side length of the square
        double getSideLength() const;

        double getArea() const;
        ~Sqaure();
    };
    class Circle
    {
    private:
        // radius member variable
        double radius;

    public:
        // constructor a default circle object
        Circle();

        // constructor
        Circle(double);

        // setter: public member function to set the radius of the circle
        void setRadius(double);

        // getter: public member function to get the radius of the circle
        void getRadius() const;

        // public member function to get the area of the circle
        double getArea() const;
        ~Circle();
    };
    class Triangle
    {
    private:
        double base;
        double height;

    public:
        // default constructor
        Triangle();

        // constructor
        Triangle(double base, double height);

        // setter: public member function to set the base of the triangle
        void setBase(double);

        // setter: public member function to set the height of the triangle
        void setHeight(double);

        // getter: public member function to get the length of the base of the triangle
        double getBase() const;

        // getter: public member function to get the length of the height of the triangle
        double getLength() const;

        // getter: public member function to get the area of the Triangle
        double getArea() const;

        ~Triangle();
    };

    class Area
    {
        static double sqaureArea(Sqaure squareObject);
        static double triangleArea(Triangle triangleObject);
        static double circleArea(Circle circleObject);
    };
};

#endif