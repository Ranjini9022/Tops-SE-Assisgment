//2. Control Statements
// Write a C program that takes the marks of a student as input and displays the corresponding grade based on the following conditions:
// Marks > 90: Grade A
// Marks > 75 and <= 90: Grade B
// Marks > 50 and <= 75: Grade C
// Marks <= 50: Grade D
#include<stdio.h>
main(){
	int marks;
    printf("\n Enter student's marks");
    scanf("%d", &marks);

    if (marks < 0 || marks > 100) {
        printf("\n Invalid marks. Please enter a value between 0 and 100");
    }

    if (marks > 90) {
        printf("\n Grade: A");
    } else if (marks > 75) {
        printf("\n Grade: B");
    } else if (marks > 50) {
        printf("\n Grade: C");
    } else{
        printf("\n Grade: D");
    }
}
