/* 10. Pointers in C
LAB EXERCISE:
Write a C program to demonstrate pointer usage. Use a pointer to modify the value of a variable and print the result.*/
#include<stdio.h>
main(){
	int  a=10;
	int *ptr;//decalre using *
	ptr=&a;
	printf("\n address=%p and value=%d",ptr,*ptr);
	*ptr=30;
	printf("\n a=%d",a);
	
	printf("\n value of pointer =%d",*ptr);
	*ptr=20;
	printf("\n a=%d",a);
}

