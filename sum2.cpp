#include <stdio.h>
#include <math.h>

int main(){
	int n;
	 printf("enter a value n : ");
	 scanf("%d",&n);
	 int l,f;
	 l = n%10;
	 while(n>=10){
	 	n = n/10;
	 	
	 }
	 f = n;
	 printf("sum of first and last digit is %d",f+l);
	 return 0;
}
