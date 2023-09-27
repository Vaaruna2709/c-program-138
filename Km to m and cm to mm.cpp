
#include<stdio.h>
#include<math.h>

int main(){
	float a,b,c,d;
	printf("enter the value in km to be converted to m,cm,mm:");
	scanf("%f", &a);
	b = a * 1000;
	c = b * 100;
	d = c *10;
	printf("value in m: %f\n",b);
	printf("value in cm: %f\n",c);
	printf("value in mm: %f\n",d);

	return 0;
}
