/*4. Functions and Scope
1. Simple Calculator Using Functions
Write a C++ program that defines functions for basic arithmetic operations (add,subtract, multiply, divide).The main function should call these based on user input.*/
#include<iostream>
using namespace std;
int main(){
	int a,b,add,sub,multiply,divide;
	cout<<"Enter the value of a :";
	cin>>a;
	cout<<"Enter the value of b :";
	cin>>b;
	add=a+b;
	sub=a-b;
	multiply=a*b;
	divide=a/b;
	cout<<"The summation is :"<<add<<endl;
	cout<<"The subtraction is :"<<sub<<endl;
	cout<<"The multiplication is :"<<multiply<<endl;
	cout<<"The division is:"<<divide<<endl;
}

