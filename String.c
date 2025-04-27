#include <stdio.h>
#include <string.h>


/* Write a C program that takes two strings from the user and concatenates them 
using strcat(). Display the concatenated string and its length using 
strlen().  */
int main(){
	
	char str1[100];
	char str2[100];
	
	
	printf("Enter a First String :");
	gets(str1);
	
	printf("you enter a first string :");
	puts(str1);
	
	printf("Enter a Second String : ");
	gets(str2);
	
	printf("you enter a Second string : ");
	puts(str2);
	
	printf("\nlengh is first string: %d", strlen(str1));
	printf("\nlengh is second string : %d", strlen(str2));
	
	strcat(str1, str2);

    printf("\nConcatenated string: %s", str1);
    
    strcpy(str1, str2);
    printf("\nCopy string str2 to str1: %s", str1);
	
	
}
