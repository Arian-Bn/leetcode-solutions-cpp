#include <iostream>

using namespace std;

/**
 * Implementation of Point and Rectangle classes in C++
 *
 * Defines a Point class representing 2D coordinates with encapsulated data and basic access methods.
 * Defines a Rectangle class using two Point objects to represent corners.
 * Includes method to calculate rectangle area.
 * Demonstrates object creation and usage in main function.
 */


class Point {
    int x, y;

public:
    Point (int value_x, int value_y) {
        x = value_x;
        y = value_y;
    }

    int Get_x() const {
        return x;
    }

    int Get_y() const {
        return y;
    }

    void print_point () const {
        cout << "\tx: " << x << "\ty: " << y << "\t";
    }
};

class Rectangle {
    Point topLeft, bottomRight;

public:
    Rectangle(Point tl, Point br) : topLeft(tl), bottomRight(br) {}
    int area () const {
        int width = bottomRight.Get_x() - topLeft.Get_x();
        if (width < 0) width = -width;

        int height = bottomRight.Get_y() - topLeft.Get_y();
        if (height < 0) height = -height;

        return width * height;
    }

    void print() const {
        cout << "Rectangle: ";
        topLeft.print_point();
        cout << " to ";
        bottomRight.print_point();
        cout << ", area = " << area() << endl;
    }
};

int main () {
    Point fir_point (1, 2);
    Point sec_point (2, 3);

    Rectangle rect(fir_point, sec_point);
    rect.print();

    return 0;
}
