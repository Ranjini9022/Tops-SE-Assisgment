/*4. Functions and Scope
3. Variable Scope
Write a program that demonstrates the difference between local and global variables in C++. Use functions to show scope.*/

#include <iostream>
using namespace std;

int globalVar = 10;

void showScope() {
    int localVar = 5;  
    
    cout << "Inside showScope()" << endl;
    cout << "Local variable: " << localVar << endl;
    cout << "Global variable: " << globalVar << endl;

    globalVar += 5;
}

void anotherFunction() {
    cout << "Inside anotherFunction()" << endl;
    cout << "Global variable: " << globalVar << endl;
}

int main() {
    cout << "Inside main()" << endl;
    cout << "Global variable: " << globalVar << endl;

    showScope();
    anotherFunction();
}

