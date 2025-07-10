/* 2.Variables, Data Types, and Operators
1. Variables and Constants
Write a C++ program that demonstrates the use of variables and constants. Create variables of different data types and perform operations on them.*/

#include <iostream>
using namespace std;

int main() {
    // Constant declaration
    const float PI = 3.14159;

    // Variable declarations
    int radius = 5;                 // integer
    float area;                     // float
    char grade = 'A';               // character
    string name = "Ranjini";        // string
    bool isStudent = true;          // boolean

    area = PI * radius * radius;    

    cout << "Name: " << name << endl;
    cout << "Grade: " << grade << endl;
    cout << "Radius: " << radius << endl;
    cout << "Area of Circle: " << area << endl;
    cout << "Is Student: " << (isStudent ? "Yes" : "No") << endl;

}


