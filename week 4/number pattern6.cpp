#include<stdio.h>
int main(){
	int n,s;
	s=1;
	printf("enter number of rows:");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i;j++){
			printf("%d ",s);
			s++;
		}
		printf("\n");
	}
}
