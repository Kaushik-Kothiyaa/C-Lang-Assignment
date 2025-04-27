/*Write a C program that acts as a simple calculator. The program should take two numbers 
and an operator as input from the user and perform the respective operation (addition, 
subtraction, multiplication, division, or modulus) using operators. 
? Challenge: Extend the program to handle invalid operator inputs. */

#include <stdio.h>

int main(){
	
	int num1, num2;
	float div;
	
	printf("Enter a Num1 : ");
	scanf("%d", &num1);
	
	printf("Enter a Num2 : ");
	scanf("%d", &num2);
	
	printf(" Addtion of %d and %d is : %d\n", num1, num2, num1+num2);
	
	printf(" Subtraction of %d and %d is : %d\n", num1, num2, num1-num2);
		
	printf(" Multiplication of %d and %d is : %d\n", num1, num2, num1*num2);
	
		div = (float) num1 / num2;
	
	if( num2 == 0 ){
		
		printf("Invald input : Number not division by Zero");
	} else {
	printf("Divison of %d and %d is : %.2f\n", num1, num2, div);
	}
	
}

