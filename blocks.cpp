/*  CPP excercises
    Block

    Class Block.
    Implement all functions (constructor, dist)
    Calculate the distance between 2 blocks
    Distance is sum of streets and avenues

    e.g.
    Block 1: 5th street, 3rd avenue
    Block 2: 11th street, 4th avenue
*/

#include "blocks.h"
#include <iostream>
using namespace std;

int main()  {
    Block *firstblock = new Block(5,3);
    Block *secondblock = new Block(11,4);

    cout << firstblock->dist(secondblock) << endl;

    return 0;
}
