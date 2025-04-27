#include <stdio.h>

int main(){
	
	int Month;
	
	printf("Enter a Month of the year ( 1 for Jan, 2 for Feb..) : ", Month);
	scanf("%d", &Month);
	
	switch(Month){
		case 1: printf(" its a January");
			break;
		
		case 2: printf(" its a February");
			break;
		
		case 3: printf(" its a March");
			break;
			
		case 4: printf(" its a April");
			break;
		
		case 5: printf(" its a May");
			break;
		
		case 6: printf(" its a June");
			break;
		
		case 7: printf(" its a July");
			break;
			
		case 8: printf(" its a August");
			break;
			
		case 9: printf(" its a September");
			break;
		
		case 10: printf(" its a October");
			break;
		
		case 11: printf(" its a November");
			break;
			
		case 12: printf(" its a December");
			break;
		
		}
	}
