//6. Strings
//LAB EXERCISE 2: Count Vowels and Consonants
//2.2 Extend the program to also count digits and special characters.
#include<stdio.h>
#include<string.h>
main(){
	char str[100];
	int digits,other,i;
	digits = other = i = 0;
	printf("\n Enter string");
	gets(str);
	while(str[i]!='\0'){
		if(str[i]>='0' && str[i]<='9'){
			digits++;
		}
		else{
		other++;
	}
	printf("\n digits=%d",digits);
	printf("\n Special characters=%d",other);
	}
}
