/*  CPP excercises - 01a
    Continuation of excercise 01.

    Ex 01b
    Put the rectangle into a class.
    http://www.cplusplus.com/doc/tutorial/classes/

    Ex 01a
    Write a function for inputting the width and height of the rectangle.

    Ex 01
    Write a program that asks the user to type the width and the
    height of a rectangle and then outputs to the screen the area
    and the perimeter of that rectangle.
    https://en.wikibooks.org/wiki/C%2B%2B_Programming/
    Exercises/Variables_and_types
*/

#include <iostream>

// use name space declarations
using std::cin;
using std::cout;
using std::endl;

class Rectangle {
    int w, h;
  public:
    void getMeasurements(int, int);
    int area() {
        return w*h;
    }
    int perimeter() {
        return 2*w+2*h;
    }
};

void Rectangle::getMeasurements (int, int) {
    cout << "Please input the width and height of a rectangle:" << endl;
    cin >> w >> h;
}

int main() {
    int w = 0;
    int h = 0;
    Rectangle myrect;
    myrect.getMeasurements(w,h);

    cout << "The rectangle's area is " << myrect.area() << " and its "
    "perimeter is " << myrect.perimeter() << "!" << endl;

    return 0;
}

