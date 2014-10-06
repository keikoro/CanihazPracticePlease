/*  CPP excercises
    Robot

    Implement a class Machine with one method beep().
    beep() is abstract.
    Class Robot is a subclass of Machine.
    When the Robot beeps, it puts out "*beeeeep*".
*/

#include <iostream>
using namespace std;

class Machine {
    public:
        virtual void beep();
};

class Robot : public Machine {
    public:
        void beep() {
            cout << "*beeeeep*" << endl;
        }
};

int main () {
    Machine *myrobot = new Robot();
    myrobot->beep();

    return 0;
}
