#include <stdio.h>
#include <math.h>

int main(){

int n;
printf("enter a number :");
scanf("%d",&n);
int a,i;
int sum;
sum =0;
while(n>0){
	
	a = n%10;
	n = n/10;
	sum = sum + a;
	i++;
	
	
}
printf("sum of its digits: %d",sum);
return 0;
}

