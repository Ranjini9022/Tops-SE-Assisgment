/* 5. Arrays and Strings
3. String Palindrome Check
Write a C++ program to check if a given string is a palindrome (reads the same forwards and backwards).*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, reversedStr;
    
    cout << "Enter a string: ";
    getline(cin, str);

    string cleanedStr = "";
    for (char ch : str) {
        if (isalnum(ch)) {
            cleanedStr += tolower(ch);
        }
    }

    reversedStr = string(cleanedStr.rbegin(), cleanedStr.rend());

    if (cleanedStr == reversedStr) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }
}

