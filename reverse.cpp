#include<stdio.h>
#include<math.h>
int main(){
	int n,a;
	printf("enter a number: ");
	scanf("%d",&n);
	for(int i=0;n>0;i++){
		a = n%10;
		n = n/10;
		printf("%d",a);
		
	}
	return 0;
} 
