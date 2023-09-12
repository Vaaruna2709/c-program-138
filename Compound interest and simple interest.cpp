#include<stdio.h>
#include<math.h>

int main(){
	float p,r,t;
	printf("enter principal:\n");
	printf("enter rate of interest per annum:\n");
	printf("enter time in years:\n");
	scanf("%f%f%f",&p,&r,&t);
	int n;
	// n is no of times it is compounded in a year
	float S,C,D;
	S = p*r*t/100;
	printf("enter n");
	scanf("%f",&n);
	printf( "simple interest is %f\n",S );
	D = pow(1+r/n,n*t);
	C = p* D;
	printf("compound interest is %f\n",C);
	return 0;
}
	
