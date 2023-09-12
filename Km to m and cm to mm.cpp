
#include<stdio.h>
#include<math.h>

int main(){
	float a,b,c,d;
	printf("enter the value in km to be converted to m (a):");
	scanf("%f", &a);
	b = a * 1000;
	printf("value in m: %f",b);
	printf("enter the value in cm to be converted to mm(c):");
	scanf("%f",&c);
	d = c*10;
	printf("value in mm: %f", d);
	return 0;
}
