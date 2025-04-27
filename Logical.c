#include <stdio.h>

int main(){
	int a,b,c,d;
	
	printf("Enter a number of a : ",a);
	scanf("%d",&a);
	
	/*printf("Enter a number of b : ",b);
	scanf("%d",b);*/
	
	printf("Enter a number of c : ",c);
	scanf("%d",&c);
	
	/*printf("Enter a number of d : ",d);
	scanf("%d",d);*/
	
	if( a > 3 && c > 3){
		printf("Both A and C greater than 3\n");
	}else{ 
	printf("condition is not full fill\n");
	}
	
	if( a > 5 || c > 5 ){
		printf("at least one condition is true\n");
		
	}
	
	if(!( a == c)){ 
	printf("a is not equal to c\n");
	
	}
	
}
