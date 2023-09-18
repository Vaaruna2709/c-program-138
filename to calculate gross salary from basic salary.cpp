#include <stdio.h>
#include <math.h>

int main() {
	int b,r;
	float g,h,d,t;
	printf("enter basic salary");
	scanf("%d",&b);
	d = 0.44*b;
	t = 0.08*b;
	printf("enter your region(1-4):");// metropolitan -1, tier 1 - 2..
	scanf("%d",&r);
	if (r == 1){
		h = 0.27 * b;
	}
	else if(r==2){
		h = 0.24*b;
	}
	else if(r==3){
		h = 0.16*b;
	}
	else{
		h = 0.12*b;
	}
	
	 
	 g = b +h+t+d;
	 printf("%f",g);
	 return 0;
	
	
	
}

