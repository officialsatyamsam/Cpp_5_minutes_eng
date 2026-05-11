#include <iostream>
using namespace std;
int main(){
    int num = 5;

    do {
        cout << num << endl;
    }
    while (num < 5); // This condition is false, but the loop will execute at least once because the condition is checked after the loop body is executed.

    return 0;
}