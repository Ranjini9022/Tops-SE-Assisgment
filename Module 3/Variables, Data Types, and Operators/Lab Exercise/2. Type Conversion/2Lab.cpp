/* 2.Variables, Data Types, and Operators
2. Type Conversion
Write a C++ program that performs both implicit and explicit type conversions and prints the results.*/
#include<iostream>
using namespace std;
int main(){
	int a=10,b=20;
	float c=10.50;
	long d=20L,e;
	e=((a+c)*d)+b;
	cout<<"Value of e : "<<e;
}

