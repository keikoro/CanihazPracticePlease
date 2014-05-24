/*  CPP excercises

    https://en.wikibooks.org/wiki/C%2B%2B_Programming/
    Exercises/Variables_and_types

    Write a program that asks the user to type the width and the
    height of a rectangle and then outputs to the screen the area
    and the perimeter of that rectangle.
*/

#include <iostream>

int main() {
    std::cout << "Please input the width and height of a rectangle:"
    << std::endl;

    int w = 0, h = 0;
    std::cin >> w >> h;

    int area = w * h;
    int perimeter = 2*w + 2*h;
    std::cout << "The rectangle's area is " << area << " and its "
    "perimeter is " << perimeter << "!" << std::endl;

    return 0;
}
