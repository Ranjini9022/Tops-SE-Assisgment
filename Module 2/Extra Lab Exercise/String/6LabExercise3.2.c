//6. Strings
//LAB EXERCISE 3: Word Count
//3.2 Modify the program to find the longest word in the sentence.
#include<stdio.h>
#include<string.h>
main(){
     char str[100];
	  char n[10][10];
	  int i,j=0,k=0,max,m=0;
	  printf("\n Enter a string");
	  gets(str);
	  for(i=0;str[i]!='\0';i++){
	  	if(str[i]==' '){
	  		n[j][k]='\0';
	  		j++;
	  		k=0;
		  }
		  else{
		  	n[j][k]=str[i];
		  	k++;
		  }
	  }	
	  n[j][k]='\0';
	  max=strlen(n[0]);
	  for(i=0;i<=j;i++){
if(max<strlen(n[i])){
	m=i;
}	
}
printf("\n Large=%s",n[m]);
}
