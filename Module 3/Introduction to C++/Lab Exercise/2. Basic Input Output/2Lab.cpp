/*1. Introduction to C++
2. Basic Input/Output
Write a C++ program that accepts user input for their name and age and then displays a personalized greeting. */
#include<iostream>
using namespace std;
int main(){
	string name;
	int age;
	cout<<"Enter your name :";
	cin>>name;
	cout<<"Enter age :";
	cin>>age;
	cout<<name<<endl;
	cout<<age<<endl;
}
