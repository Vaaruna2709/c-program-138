#include<stdio.h>
int main(){
	int n;
	printf("enter no of rows:");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int s=0;s<n-1-i;s++){
			
			printf(" ");
		}
		for(int j=0;j<2*i+1;j++){
			printf("*");
		}
		printf("\n");
	}

	
}
