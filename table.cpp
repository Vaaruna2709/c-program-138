#include <stdio.h>
#include <math.h>

int main(){
	int n;
	printf("enter the number for which you want the table to be printed: ");
	scanf("%d",&n);
	for(int i = 1;i<=10;i++){
		printf("%d*%d=%d\n",n,i,n*i);
		
	}
	return 0;
}
