//6. Strings
//LAB EXERCISE 1: String Reversal
//1.1 Write a C program that takes a string as input and reverses it using a function.
#include<stdio.h>
main(){
	int i,l;
	char str[20];
	printf("Enter a name: ");
	scanf("%s",str);
	l=0;
	while(str[1]!='\0'){
		l++;
	}
	i=l-1;
	while(i>=0){
		printf("%c",str[i]);
		i--;
	}
}
