#include<stdio.h>
#include<math.h>

int main(){
	int a,b,c;
	printf("enter 3 values:");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a > c)
	{printf("%d is the greatest",a);
	}
	else if (b>c && b>a)
	{printf("%d is the greatest",b);
	}
	else
	{ printf("%d is the greatest",c);
	}
	return 0;
}
