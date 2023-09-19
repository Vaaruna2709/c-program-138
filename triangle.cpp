#include <stdio.h>
#include <math.h>

int main(){
	int a,b,c;
	printf("enter the values of three sides");
	scanf("%d""%d""%d",&a,&b,&c);
	if(a==b && b==c){
		printf("it is a equialateral triangle");
	}
	else if(a==b || b==c || c==a){
		printf("it is a isoceles triangle");
		
	}
	else
	printf("it is a scalene triangle");
	
	return 0;
}
