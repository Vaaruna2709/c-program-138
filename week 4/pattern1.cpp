#include<stdio.h>

int main(){
	int n;
	printf("enter number of rows:");
	scanf("%d",&n);
	for(int i =0;i<n;i++){
		for(int k =0;k<1+i;k++){
		
		printf("*");
	}
		printf(" \n");	
	}

	
	return 0;
}
