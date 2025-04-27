#include <stdio.h>

//Challenge: Extend the program to reverse the digits of the number.
/* 15987
	1598 7
	7 + r*/


int main(){
	
	int num , r, rev ;
	
	printf("Enter any Number : ");
	scanf("%d", &num);
	
	while(num>0){
		r = num % 10;
		rev = rev*10 + r;
		num = num / 10;
	}
	printf("rev number is : %d", rev);
	
}
