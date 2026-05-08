#include <iostream>
using namespace std;

union human{
    int hand;
    int leg;
    char s_name;
};

int main(){
    union human h1;
    h1.hand = 2;

    cout << "Satyam has " << h1.leg << " legs." << endl;    // In union, all members share the same memory location, so accessing h1.leg will give the value of h1.hand which is 2.
}