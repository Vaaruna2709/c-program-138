#include<stdio.h>
int main(){
	int n;
	printf("enter even  no of rows:");
	scanf("%d",&n);
	for(int i=0;i<n/2;i++){
		for(int s=0;s<i;s++){
			if(i==0);
			else
			printf(" ");
		}
		for(int j=0;j<n/2-i;j++){
			printf("*");
		}
		printf("\n");
	}
	for(int i=0;i<n/2;i++){
		for(int s=0;s<n/2-i-1;s++){
			
			printf(" ");
		}
		for(int j=0;j<i+1;j++){
			printf("*");
		}
		printf("\n");
	}
	
}
