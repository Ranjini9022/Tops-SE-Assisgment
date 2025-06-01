/* 12. Structures in C
LAB EXERCISE:Write a C program that defines a structure to store a student's details (name,roll number, and marks). Use an array of structures to store details of 3
students and print them */
#include<stdio.h>
struct student{
int Roll;
char name[20];
float Marks;	
};
main(){
	int i;
	struct student s[3];
	printf("\n Enter Students Record");
	
	for(i=0;i<3;i++){
		printf("\n Enter sroll: ");
		scanf("%d",&s[i].Roll);
		printf("\n Enter sname: ");
		scanf("%s",&s[i].name);
		printf("\n Enter smarks: ");
		scanf("%f",&s[i].Marks);
	}
	printf("\n Enter Students Record");
	
	for(i=0;i<3;i++){
		printf("\n sroll: %d",s[i].Roll);
		printf("\n sname: %s",s[i].name);
		printf("\n smarks: %f",s[i].Marks);
}
}

