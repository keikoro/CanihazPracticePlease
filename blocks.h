#include <iostream>
using namespace std;

class Block {
    private:
        int s;
        int a;
    public:
        Block(int street, int avenue) {
            s = street;
            a = avenue;
        }
        int dist(Block* block) {
            int dist_street = 0;
            int dist_avenue = 0;

            if(s > block -> s) {
                dist_street = (s-block -> s);
            } else {
                dist_street = (block -> s-s);
            }
            if(a > block -> a) {
                dist_avenue = (a-block -> a);
            } else {
                dist_avenue = (block -> a-a);
            }

            return dist_street + dist_avenue;
        }
};
