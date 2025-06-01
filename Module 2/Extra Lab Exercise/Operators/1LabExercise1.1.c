//1.Operators
//LAB EXERCISE 1: Simple Calculator
#include<stdio.h>
main(){
	int a,b,c,add,sub,mul,div;
	printf("\n Enter 2 num");
	scanf("%d %d",&a,&b);
	printf("\n 1.Addition");
	printf("\n 2.Subtraction");
	printf("\n 3.Multiplication");
	printf("\n 4.Division");
	printf("\n Enter your choice");
	scanf("%d",&c);
	switch(c){

case 1:
printf("Addition %d",a+b);
break;
case 2:
printf("Subtraction%d",a-b);
break;
case 3:
printf("Multiplication %d",a*b);
break;
case 4: if(b != 0)
printf("Division %d",a/b);
else
printf("\n number can't be divided by 0");
break;
default:
printf("\n Error: Invalid operator.");

}
}
