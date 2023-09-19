#include <stdio.h>
#include <math.h>

int main(){
	int n;
	printf("enter a number n ");
	scanf("%d",&n);
	for(int i=1;i<=n;i=i+2){
		if(i%2!=0)
		printf("%d\n",i);
	}
	return 0;
}

