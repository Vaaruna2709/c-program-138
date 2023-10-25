#include<stdio.h>
int main(){
	int rows;
	printf("enter the number of rows:");
	scanf("%d",&rows);
	for(int i=0;i<rows;i++){
		for(int s=0;s<=i;s++){
			printf(" ");
		}
		for(int j=0;j<2*(rows-i)-1;j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
	
}
