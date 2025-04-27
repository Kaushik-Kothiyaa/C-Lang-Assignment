/*Write a C program that takes three numbers from the user and determines: 
o The largest number. 
o The smallest number. 
? Challenge: Solve the problem using both if-else and switch-case statements.*/

#include <stdio.h>

int main(){
	
	int a, b, c;
	int smallest, largest;
	
	printf("Enter a First Number ");
	scanf("%d", &a);
	
	printf("Enter a Second Number ");
	scanf("%d", &b);
	
	printf("Enter a Third Number ");
	scanf("%d", &c);
	
	largest = ( a >= b && a >= c) ? 1 : ( b >= a && b >= c) ? 2 : ( c >= a && c >= b ) ? 3 : 4 ;
	
	switch(largest){
	case 1:
		printf(" Number %d is Largest ", a);
		break;
	case 2:
		printf(" Number %d is Largest ", b);
		break;
	case 3:
		printf(" Number %d is Largest ", c);
		break;
	case 4:
		printf(" Invalid Input");
		break;
	}
	
	smallest = ( a <= b && a <= c) ? 1 : ( b <= a && b <= c) ? 2 : ( c <= a && c <= b ) ? 3 : 4 ;
	
		switch(smallest){
	case 1:
		printf(" Number %d is smallest ", a);
		break;
	case 2:
		printf(" Number %d is smallest ", b);
		break;
	case 3:
		printf(" Number %d is smallest ", c);
		break;
	case 4:
		printf(" Invalid Input");
		break;
	}


}
