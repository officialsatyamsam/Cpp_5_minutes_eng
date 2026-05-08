#include <iostream>
using namespace std;


int main() {

    cout << "We are going to calculate bitwise AND, OR and XOR of two numbers." << endl;
    int a,b;
    char op;

while (true)
{    
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;

    cout << "Choose any bitwise operator like &, |, ^, ~,." << endl;
    cin >> op;

    switch (op) {
        // If we not put break here, then it will execute all the cases from it finds the match case.
        case '&':
            cout << "The bitwise AND of " << a << " and " << b << " is: " << (a & b) << endl;
            ;
        case '|':
            cout << "The bitwise OR of " << a << " and " << b << " is: " << (a | b) << endl;
            ;
        case '^' :
            cout << "The bitwise XOR of " << a << " and " << b << " is: " << (a ^ b) << endl;
            ;
        case '~' :
            cout << "The bitwise NOT of " << a << " is: " << (~a) << " and the bitwise NOT of " << b << " is: " << (~b) << endl;
            ;
        default :
            cout << "Invalid operator. Please choose a valid bitwise operator." << endl;
        }
}
}