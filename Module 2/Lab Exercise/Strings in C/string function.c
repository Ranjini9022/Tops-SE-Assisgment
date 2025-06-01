/* 11. Strings in C
LAB EXERCISE:
Write a C program that takes two strings from the user and concatenates them using strcat(). Display the concatenated string and its length using strlen() */
#include<stdio.h>
#include<string.h>
main(){
	char str,str1[20],str2[20];
	int i=10;
	printf("\n Enter the first string");
    scanf("%s",str1);	
    printf("\n Enter the second string");
    scanf("%s",str2);
    strcat(str1,str2);
	printf("\nThe resultant string=%s",str1,str2);
	
	printf("\n enter the string");
	gets(str);//ranjini
	while(str[i]!='\0'){
      i++;
}
	printf("\n len=%d",i);
}


