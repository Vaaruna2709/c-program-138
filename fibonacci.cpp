#include<stdio.h>
#include<math.h>

int main(){
	int n;
	printf("Enter the value of n in order to print nth value of fibonacci series:");
	scanf("%d",&n);
	int a,b,c,i;
	a=0;
	b=1;
	if(n==1)
	printf("0");
	if (n==2)
	printf("1");
	for(i=3;i<=n;i++){
	c = a+b;
	a =b;
	b=c;
}
   printf("%d",c);
   return 0;
}
