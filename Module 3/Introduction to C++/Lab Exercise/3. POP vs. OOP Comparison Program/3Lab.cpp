/*1. Introduction to C++
LAB EXERCISES: 1. First C++ Program: Hello World
Write two small programs: one using Procedural Programming (POP) to calculate the area of a rectangle, and another using Object-Oriented Programming (OOP) with a class and object for the same task*/
#include<iostream>
using namespace std;
class A{
	int L,B,area;
	public:
		void rectangle(){
			cout<<"Enter Length & Breath of Rectangle";
			cin>>L>>B;
			area=L*B;
			cout<<"Area of Rectangle"<<area;
		}
};
void (){
	A obj;
	obj.rectangle();
}
int main(){
	float Length,Width,Area;
	cout<<"Enter Length";
	cin>>Length;
	cout<<"Enter Width";
	cin>>Width;
	Area=Length*Width;
	cout<<"Area of Rectangle"<<Area;
}


