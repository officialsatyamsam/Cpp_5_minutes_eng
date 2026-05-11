#include <iostream>
using namespace std;


// class myclass {
//     private:   //By default, all members of a class are private if we do not specify any access specifier.
//         int private_var = 10;   // This variable is private and can only be accessed within the class.
        
//     public:
//         void show() {
//             //
//             cout << private_var << endl;
//         }
 


// };




class Test {

    private: // By default, all members of a class are private .
        int a = 10; 


    public:    
        void display() {
            cout << "The value of a is: " << a << endl;
            // This function is private and can only be accessed within the class.
        }
};


int main() {
    
    // myclass private_obj;
    // private_obj.show(); 

    Test obj;
    obj.display(); 
    return 0;
}