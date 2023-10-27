#include<stdio.h>
int main(){
	int rows;
	int s=1;
	printf("enter number of rows:");
	scanf("%d",&rows);
	for(int i=0;i<rows;i++){
		for(int j=0;j<i+1;j++){
			
			printf("%d ",s);
			s++;
		}
		printf("\n");
	}
	return 0;
}
