/*Write a C program that accepts 10 integers from the user and stores them in an array. The 
program should then find and print the maximum and minimum values in the array. 
? Challenge: Extend the program to sort the array in ascending order.  */

#include <stdio.h>

int main(){
	
	int num [10];
	int i, max, min;
	
	for(i=0 ; i<10 ; i++){
		
		printf("Enter a Number %d = ", i+1);
		
		scanf("%d", &num[i]);
	}
	
	max = num[i];
	
	for(i=0 ; i<10; i++){
		
		if(num[i]>max){
			
			max = num[i];
		}
	}
	
	min = num[i];
	
	for(i=0 ; i<10; i++){
		
		if(num[i]<min){
			
			min = num[i];
		}
	}
	
	printf("\nMaximum number is %d", max );
	
	printf("\nMinimum number is %d", min );
	
	
}
