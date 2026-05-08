#include<iostream>
using namespace std;
struct human {
    
    int hand = 2;
    int leg = 2;
    char s_name[20] = "homosapiens";

    void func1(){
        cout << "I am a human being." << endl;
    }
};

int main(){
    human h1;
    h1.func1();
    cout << "Satyam have " << h1.hand << " hands and " << h1.leg << " Legs and his scientific name is " << h1.s_name << "." << endl;
    return 0;
}