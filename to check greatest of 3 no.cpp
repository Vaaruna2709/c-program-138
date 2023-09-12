#include<stdio.h>
#include<math.h>

int main(){
	int a,b,c;
	printf("enter 3 values:");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a > c)
	{printf("a is the greatest");
	}
	else if (b>c && b>a)
	{printf("b is the greatest");
	}
	else
	{ printf("C is the greatest");
	}
	return 0;
}
