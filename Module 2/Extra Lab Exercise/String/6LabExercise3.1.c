//6. Strings
//LAB EXERCISE 3: Word Count
//3.1 Write a C program that counts the number of words in a sentence entered by the user.
#include<stdio.h>
#include<string.h>
main(){
	char str[100];
	int i,word;
	printf("\n Enter a String");
	gets(str);
	i=0;
	word=1;
while(str[i]!='\0'){
if(str[i]==' ' || str[i]=='\n' || str[i]=='\t')	
word++;
i++;
	}
	printf("\n Total number of word %d",word);
}
