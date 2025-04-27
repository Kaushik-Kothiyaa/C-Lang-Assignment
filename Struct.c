
/*Write a C program that defines a structure to store a student's details (name, 
roll number, and marks). Use an array of structures to store details of 4 
students and print them. */

#include <stdio.h>

struct students {
	
	int roll;
	char name[50];
	float cgpa;
};

int main(){
	struct students s[4];
	int i;
	
	
	for(i = 0; i < 4; i++){
	printf("Enter Roll no Name CGPA for student %d : ", i+1);
	scanf("%d %s", &s[i].roll, s[i].name);
	scanf("%f", &s[i].cgpa);
	}
	
	for(i = 0; i < 4; i++){
	
	printf("\n Name=%s \n Enroll=%d",s[i].name,s[i].roll);
	printf("\n CGPA=%f",s[i].cgpa);
	}
}
