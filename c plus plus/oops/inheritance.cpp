#include <iostream>
using namespace std;

class Shape
{
public:
    string name;
};

class Color
{
public:
    string color;
};

class Rectangle : private Shape, public Color
{
    int width, height;

public:
    Rectangle(int width, int height)
    {
        color = "Blue";
        name = "Rectangle";
        this->width = width;
        this->height = height;
    }
    int getWidth()
    {
        return width;
    }
    int getHeight()
    {
        return height;
    }
};

class Circle : private Shape
{
    int radius;

public:
    Circle(int radius)
    {
        name = "Circle";
        this->radius = radius;
    }
    int getRadius()
    {
        return radius;
    }
};

int main()
{
    Rectangle r = Rectangle(10, 20);
    Circle c = Circle(15);

    cout << "Width of rectangle: " << r.getWidth() << " Height: " << r.getHeight() << endl;
    cout << "Radius of circle: " << c.getRadius() << endl;
    cout << "Color of rectangle is " << r.color << endl;



    return 0;
}