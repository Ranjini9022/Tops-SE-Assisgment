/* 5. Arrays and Strings
1. Array Sum and Average
Write a C++ program that accepts an array of integers, calculates the sum and average, and displays the results.*/

#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;
    int numbers[size];
    int sum = 0;
    cout << "Enter " << size << " integers:" << endl;
    for(int i = 0; i < size; i++) {
        cin >> numbers[i];
        sum += numbers[i];  // Calculate sum
    }
    double average = static_cast<double>(sum) / size;
    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;
}




