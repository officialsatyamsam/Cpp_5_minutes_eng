#include <iostream>
using namespace std;

int main(){
    int num = 5;

    for (int num = 5; num <= 10; num++) {  // In for loop intitialistion we can re-declare the variable 'num'.
        cout << num << endl;
    }

    int num2 = 5;
    for (; num2 <= 10; num2++) {  // In for loop, if we have already declared the variable 'num2' then we can skip the initialization part.
        cout << num2 << endl;
    }

    int num3 = 5;
    for (; num3 <= 10; ) { // In for loop, we can skip the incrementor part in the syntax, and can increment the varirable 'num3' inside the loop body 
        cout << num3 << endl;
        num3++; // This will work like the while loop, where we have to increment the variable 'num3' inside the loop body to avoid an infinite loop.
    }


    return 0;
}