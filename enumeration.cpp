#include <iostream>
using namespace std;

enum human { hand, leg, s_name };
    void func1(){
        cout << "I am a human being." << endl;
    }

int main(){
    enum human h1;
    h1 = leg;

    cout << h1 << endl;    // In enumeration, the members are assigned integer values by default starting from 0. So, h1 will have the value 1 which corresponds to leg.
}