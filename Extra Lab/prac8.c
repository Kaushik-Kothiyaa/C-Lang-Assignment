//===================================================================
//Challenge: Allow the user to input the range of the multiplication table (e.g., from 1 to N).\n
//==========================================================================
#include <stdio.h>
main(){
	
	int i, n, j;
	
	
	printf("Enter a Number : ");
	scanf("%d", &n);
	
	printf("Enter a range of the Multiplication table : ");
	scanf("%d", &j);
	
	
	
	for( i = 1 ; i <= j ; i++){
		printf("%d * %d * = %d", n , i, i * n);
		printf("\n");
	}

}
