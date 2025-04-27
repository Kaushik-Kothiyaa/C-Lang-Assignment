#include <stdio.h>

int main(){
	
	int Num;
	
	printf(" Enter a Number : ", Num);
	scanf("%d", &Num);
	
	if( Num%2==0 ){
		printf("Number given is even ");
	}else{
		printf("Number given is Odd");
	}
}
