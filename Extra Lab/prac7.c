/*Write a C program that takes an integer input from the user and prints its multiplication 
table using a for loop. */

#include <stdio.h>

main(){
	
	int i, n;
	
	printf("Enter a Number : ");
	scanf("%d", &n);
	
	for( i = 1 ; i <= 10; i++){
		printf("%d * %d * = %d", n , i, i * n);
		printf("\n");
	}
	
}

