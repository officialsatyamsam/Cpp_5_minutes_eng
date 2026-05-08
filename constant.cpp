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
    
    #define MAX 100 // MAX is a preprocessor directive that defines a constant named MAX with the value 100.
    
    num = 9 | 5;
    cout << num << endl; 
    cout << (9 | 5) << endl;    // This will output 13, which is the result of the bitwise OR operation between 9 and 5.
    

    num == 13 ? cout << "True" : cout << "False";   // This is a ternary operator that checks if 'num' is equal to 13. If it is, it will output "True"; otherwise, it will output "False".
    
    return 0;
}