/*  Extend the program to sort the array in ascending order.*/

#include <stdio.h>

int main(){
	
	int num [10];
	int i, j, temp;
	
	for(i=0 ; i<10 ; i++){
		
		printf("Enter a Number %d = ", i+1);
		
		scanf("%d", &num[i]);	
		
	}
	
	for(i=0 ; i<10 ; i++){
		
		for(j=i+1 ; j<10 ; j++){
			
			if(num[i]>num[j]){
				
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;			
				
			}
		}
	}
	
	for(i=0 ; i<10 ; i++){
		
		printf(" %d ", num[i]);
	
	}
	
}
