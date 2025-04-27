 /*Write a C program that takes an integer from the user and checks the following using 
different operators: 
o Whether the number is even or odd. 
o Whether the number is positive, negative, or zero. 
o Whether the number is a multiple of both 3 and 5.*/

#include <stdio.h>

int main(){
	
	int a;
	
	printf("Enter a Number : ");
	scanf("%d", &a);
	
	( a % 2 == 0 ) ? printf("\nNumber  given is Even ") : printf("\nNumber given is Odd");
	
	if( a > 0 ){
	 printf("\nNumber  given is Positive "); 
	 } if (a < 0 ) {
	  printf("\nNumber given is Negative"); 
		} else { 
		printf("\nNumber given is Zero");
		}
		
	( a % 3 == 0 && a % 5 == 0 ) ? printf("\nNumber given is multiple of 3 and 5 ") : printf("\nNumber given is not multiple of 3 and 5");
	
}
