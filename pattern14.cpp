#include<stdio.h>
int main(){

int n;
printf("enter odd number of rows:");
scanf("%d",&n);
int t,k;
t=n/2;
k=n-t;
for(int i=0;i<k;i++){
	for(int s=0;s<k-1-i;s++){
		printf(" ");
		}
	for(int j=0;j<2*i+1;j++){
			printf("* ");
		}
		printf("\n");
	}
for(int i=0;i<t;i++){
	for(int s=0;s<i+1;s++){
		printf(" ");
	}
	for(int j=0;j<2*(t-i)-1;j++){
		printf("* ");
	}
	printf("\n");
}
}

