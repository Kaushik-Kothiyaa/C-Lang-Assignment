#include <stdio.h>

//Write a C program that takes an integer from the user and calculates the sum of its digits 
//using a while loop. 

//===> 12563 --- 1256 3

int main(){
	
	int num , r, sum = 0 ;
	
	printf("Enter any Number : ");
	scanf("%d", &num);
	
	while(num>0){
		r = num % 10;
		sum = sum + r;
		num = num / 10;
	}
	printf("Total of given number is : %d", sum);
	
}
