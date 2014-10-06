#include <iostream>
#include <vector>
using namespace std;

class IntSet {
    private:
        vector<string> _elements;
    public:
        bool add(string i) {
            vector<string>::iterator it = _elements.begin();

            for (; it != _elements.end(); ++it) {
                if (*it == i) {
                    return false;
                }
            }
        _elements.push_back(i);
        return true;
        }
};
