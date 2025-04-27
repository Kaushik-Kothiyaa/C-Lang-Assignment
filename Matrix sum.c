#include<stdio.h>
main(){
	int a[3][3],b[3][3],c[3][3];
	int i,j;

	printf("\n First array\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\t enter a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n Second array\n");
		for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\t enter b[%d][%d]=",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
		   c[i][j]=a[i][j]+b[i][j];
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("\t c[%d][%d]=%d",i,j,c[i][j]);
		}
		printf("\n");
	}
}
