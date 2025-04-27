#include <stdio.h>

int factorial(int n); // function declartion

int main(){
	
	int n;
	
	printf("Enter a Number : ", n);
	scanf("%d", &n);
	
	int result;
	
	result = factorial(n); // function call
	
	printf(" Factorial of given %d is : %d" , n, result);
	
}

int factorial(int n) { // function defination
	
	int i, fact = 1;
	for ( i = 1; i <= n ; i++){
		fact = fact * i;
	}
	
	return fact;
}
