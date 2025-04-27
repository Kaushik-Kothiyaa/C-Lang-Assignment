/*Write a C program that checks whether a given number is a prime number or not using a for 
loop. 
? Challenge: Modify the program to print all prime numbers between 1 and a given number.*/

#include <stdio.h>
main(){
	
	int n, count = 0, i;
	
	printf("Enter a Number : ");
	scanf("%d", &n);
	
	for( i = 1 ; i <= n ; i++ ){
		if( n % i == 0)
			count++;	
	}
	if(count==2){
		printf("%d is prime number ", n);
	} else {
	printf(" %d is not a prime number ", n);
	}		
	
	
	
	}
