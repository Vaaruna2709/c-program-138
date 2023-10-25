#include<stdio.h>
int main(){

int n;
printf("enter even number of rows:");
scanf("%d",&n);
for(int i=0;i<n/2;i++){
	for(int j=0;j<i+1;j++){
		printf("* ");
	}
	printf("\n");
}
for(int q=0;q<n/2;q++){
	for(int m=0;m<n/2-q-1;m++){
		printf("* ");
	}
	printf("\n");
}
}
