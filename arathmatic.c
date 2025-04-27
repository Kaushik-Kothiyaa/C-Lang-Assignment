#include <stdio.h>
int main(){
	int a,b,c,d;
	float e;
	
	printf("Enter a value of a : ");
	scanf("%d", &a);
	
	printf("Enter a value of b : ");
	scanf("%d", &b);
	
	c = a + b;
	
	printf("Addtion of a and b is : %d\n", c);
		
	d = a * b;
	
	printf("Multification of a and b is : %d\n", d);
	
	printf("Subtraction of a and b is : %d \n", a - b);
	
	e = (float)a/b;
	printf("division of a and b is : %f ", e);
	
	
}
