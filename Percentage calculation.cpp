#include<stdio.h>
#include<math.h>

int main(){
	float a,b,c,d,e,A,B,C,D,E;
	printf("enter marks in 5 different subjects(out of 80)");
	scanf("%f%f%f%f%f",&c,&d,&e,&a,&b);
	A = a/80 * 100;
	B = b/80*100;
	C =c/80* 100;
	D = d/80*100;
	E = e /80*100;
	printf("percentage in a : %f",A);
	printf("percentage in b : %f",B);
	printf("percentage iN c : %f",C);
	printf("percentage in d : %f",D);
	printf("percentage in e : %f",E);
	return 0;
}
 
	
