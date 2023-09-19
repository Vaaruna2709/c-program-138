#include <stdio.h>
#include <math.h>

int main(){
	int a,b;
	printf("enter a and b values:");
	scanf("%d""%d",&a,&b);
	int t = a;
	a=b;
	b = t;
	printf("after swapping the value of a and b are %d,%d",a,b);
	return 0;
	}