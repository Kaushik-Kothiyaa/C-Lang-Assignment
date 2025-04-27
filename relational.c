#include <stdio.h>

int main(){
	int a, b;
	int d, e;
	
	printf(" Enter a Number a : ", a);
	scanf("%d", &a);
	
	printf(" Enter a Number b : ", b);
	scanf("%d", &b);
	
	if( a > b ){
		printf(" a is greter than b");
		
	}else {
		printf(" b is gretaer than a");
	}
	
		printf(" \nEnter a Number d : ", d);
	scanf("%d", &d);
	
	printf(" Enter a Number e : ", e);
	scanf("%d", &e);
	
	if ( d == e ){
		printf(" both number are equal");
	} else {
		printf("both number are not equal");
	}
	
}
