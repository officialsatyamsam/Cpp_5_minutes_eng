#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int &b = a; // reference variable b is created which refers to variable a

    cout << a << endl;
    cout << b << endl;

    b = 20; // changing the value of b will also change the value of a
    cout << a << endl; // output will be 20
    cout << b << endl; // output will be 20
}