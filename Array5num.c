#include <stdio.h>

int main(){
	int number[5];
	int i = 0;
		
		printf("Enter 5 Number : ");
		for(i = 0; i < 5; i++){
			printf("\nNumber %d = ", i + 1);
			scanf("%d", &number[i]);
		}
		printf("your entered numbers are ");
		for( i = 0; i < 5; i++){
			printf("%d ",number[i]);	
			
		}
		printf("\n");
}
