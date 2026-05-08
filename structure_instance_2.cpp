#include <iostream>
#include <string.h>
using namespace std;
struct subject{
    int sub;    //no. of subjects
    string maths;
    string science;
    string english; 
};

int main (){
    struct subject s1;  //creating an instance of structure subject.
    //assigning values to the members of structure subject using dot operator.
    s1.sub = 3;
    s1.maths = "mathematics";
    s1.science = "science"; 
    s1.english = "english";

    //creating and assigning values to the members of structure subject at the same time by = operator.
    struct subject s2 = {3, "MATHEMATICS", "SCIENCE", "ENGLISH"};   
    cout << "Satyam has " << s1.sub << " subjects and they are " << s1.maths << ", " << s1.science << " and " << s1.english << "." << endl;
    cout << "Satyam has " << s2.sub << " subjects and they are " << s2.maths << ", " << s2.science << " and " << s2.english << "." << endl;
    return 0;
}