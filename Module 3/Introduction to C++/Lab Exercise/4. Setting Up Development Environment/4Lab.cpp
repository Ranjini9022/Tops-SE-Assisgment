/*1. Introduction to C++
LAB EXERCISES: 4.Setting Up Development Environment
Write a program that asks for two numbers and displays their sum. Ensure this is done after setting up the IDE (like Dev C++ or CodeBlocks).*/
#include<iostream>
using namespace std;
main(){
	int num1,num2,sum;
	cout<<"Enter the first number";
	cin>>num1;
	cout<<"Enter the second number";
	cin>>num2;
	sum=num1+num2;
	cout<<num1<<" + "<<num2<<" = "<<sum;
}


