#include <iostream>

using namespace std;

/**
 * Class: Point
 * A simple C++ class representing a 2D point with integer coordinates x and y.
 * Demonstrates encapsulation, constructor initialization, getters, setters, and const-correctness.
 *
 * @param x  - x-coordinate of the point (int)
 * @param y  - y-coordinate of the point (int)
 *
 * @constructors
 *     Point(int x, int y) - initializes the point coordinates
 *
 * @methods
 *     Set_x(const int)    - sets the x-coordinate
 *     Set_y(const int)    - sets the y-coordinate
 *     Get_x() const       - retrieves the x-coordinate
 *     Get_y() const       - retrieves the y-coordinate
 *     print_point() const - prints the point coordinates to stdout
 *
 * @note
 * All data members are private to enforce encapsulation.
 * Getters and print_point() methods are marked const to guarantee no modification of the object.
 */


class Point {
    int x, y;

public:
    Point (int value_x, int value_y) {
        x = value_x;
        y = value_y;
    }

    void Set_x (const int value_x) {
        x = value_x;
    }

    void Set_y (const int value_y) {
        y = value_y;
    }

    int Get_x() const {
        return x;
    }

    int Get_y() const {
        return y;
    }

    void print_point () const {
        cout << "x: " << x << "\ty: " << y << endl;
    }
};

int main () {
    Point first_point (1, 2);
    first_point.print_point();

    first_point.Set_x(3);
    first_point.Set_y(4);
    cout << "Set and Get:\n";
    cout << "x: " << first_point.Get_x() << "\t";
    cout << "y: " << first_point.Get_y() << endl;

    return 0;
}