//2. Control Statements
// Lab exercise 2: 2.2 Write a C program that takes three numbers from the user and determines:o The smallest number.
#include<stdio.h>
main(){
	int a,b,c;
	printf("\n Enter the number");
	scanf("%d %d %d",&a,&b,&c);
		if(a<b && a<c){
        	printf("\n %d is smallest",a);
        }
    if(b<a && b<c){
		printf("\n %d is smallest",b);
}
else{
			printf("\n %d is smallest",c);

}
}
