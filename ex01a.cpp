/*  CPP excercises - 01a
    Continuation of excercise 01.

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

void getMeasurements();

int main() {
    cout << "Please input the width and height of a rectangle:"
    << endl;

    int w = 0, h = 0;
    cin >> w >> h;

    int area = w * h;
    int perimeter = 2*w + 2*h;
    cout << "The rectangle's area is " << area << " and its "
    "perimeter is " << perimeter << "!" << endl;

    return 0;
}

void getMeasurements();
