#include <stdio.h>
#include <math.h>

int main(){
	int a;
	printf("enter a number for which the length of it has to be found: ");
	scanf("%d",&a);
	int c;
	c=0;
	while( a!=0){
		a=a/10;
		c++;
	}
	printf("length of the number is %d",c);
	return 0;
}
