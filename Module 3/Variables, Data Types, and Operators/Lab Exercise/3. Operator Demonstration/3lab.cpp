/*2.Variables, Data Types, and Operators
3.Operator Demonstration
Write a C++ program that demonstrates arithmetic, relational, logical, and bitwise operators. Perform operations using each type of operator and display the results.*/

#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 5;

    // Arithmetic Operators
    cout << "Arithmetic Operators:" << endl;
    cout << "a + b = " << (a + b) << endl;
    cout << "a - b = " << (a - b) << endl;
    cout << "a * b = " << (a * b) << endl;
    cout << "a / b = " << (a / b) << endl;
    cout << "a % b = " << (a % b) << endl;
    
    // Relational Operators
    cout << "\nRelational Operators:" << endl;
    cout << "a == b: " << (a == b) << endl;
    cout << "a != b: " << (a != b) << endl;
    cout << "a > b: " << (a > b) << endl;
    cout << "a < b: " << (a < b) << endl;
    cout << "a >= b: " << (a >= b) << endl;
    cout << "a <= b: " << (a <= b) << endl;

    // Logical Operators
    bool x = true, y = false;
    cout << "\nLogical Operators:" << endl;
    cout << "x && y = " << (x && y) << endl;
    cout << "x || y = " << (x || y) << endl;
    cout << "!x = " << (!x) << endl;

    // Bitwise Operators
    int m = 6;   // 0110 in binary
    int n = 3;   // 0011 in binary
    cout << "\nBitwise Operators:" << endl;
    cout << "m & n = " << (m & n) << endl;  // AND
    cout << "m | n = " << (m | n) << endl;  // OR
    cout << "m ^ n = " << (m ^ n) << endl;  // XOR
    cout << "~m = " << (~m) << endl;        // NOT
    cout << "m << 1 = " << (m << 1) << endl; // Left shift
    cout << "m >> 1 = " << (m >> 1) << endl; // Right shift
}
