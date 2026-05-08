#include <iostream>
#include <string.h> // Include the string.h header for using the strcpy function to copy strings.

using namespace std;

int main(){
    const char name[] = "Satyam";
    const int age = 20;
    char word[10] = "Hello";

    cout << "My name is " << name << " and I am " << age << " years old." << endl;

    int num = 10;
    // int num = 20;   //this gives error bacause redeclaration of variable 'num' is not allowed in the same scope.

    num = 20; // This is allowed because 'num' is not declared as a constant and can be modified.       
    cout << num << endl; // This will output 20.

    // word[10] = "World"; // This will cause a compilation error because 'word' is an array of characters and cannot be assigned a new string directly. You would need to use a function like strcpy to copy the new string into the array.   

    // strcpy(word, "World"); // This is the correct way to change the value of 'word'.
    cout << word << endl; 
   
   
    // int age = 25; // This will cause a compilation error because 'age' is declared as a constant and cannot be modified.
    return 0;

}