#include <stdio.h>

/*Write a C program to demonstrate pointer usage. Use a pointer to modify the 
value of a variable and print the result.*/

int main(){
	
	int a = 10;
	int *ptr;
	
	ptr = &a;
	
	printf("original value of a : %d", a);
	
	*ptr = 15;
	
	printf(" \nModify value of a variable is %d : ", *ptr);
}
