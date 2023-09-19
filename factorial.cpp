#include <stdio.h>
#include <math.h>

int main(){
	int n,f,i;
	printf("enter n ");
	scanf("%d",&n);
	for(f=1,i=1;i<=n;i++){
		f = f*i;
	}
	printf("factorial of n is %d",f);
}
