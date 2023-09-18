#include <math.h>
#include <stdio.h>

int main(){
	int a,b,c;
	printf("enter three integers:");
	scanf("%d""%d""%d",&a,&b,&c);
	
	if(a>=b && a>=c)
	printf("greatest of all is %d\n",a);
	else if(b>=c && b>=a)
	printf("greatest of all is %d\n",b);
	else 
	printf("greatest of all is %d\n",c);
	 return 0;
}
