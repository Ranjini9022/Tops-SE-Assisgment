//6. Strings
//LAB EXERCISE 2: Count Vowels and Consonants
//2.1 Write a C program that takes a string from the user and counts the number of vowels and consonants in the string.
#include<stdio.h>
#include<string.h>
main(){
	char str[100];
	int i,vowels=0,consonants=0;
	printf("\n Enter a string");
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++){
		if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'){
			vowels++;
		}
		else if((str[i]>='a' && str[i]<='z') ||
		(str[i]>='A' && str[i]<='Z')){
			consonants++;
		}
	}
	printf("\n Number of vowels in the string %d",vowels);
	printf("\n Number of consonants in the string %d",consonants);
}

