#include <stdio.h>
#include <math.h>

int main(){
	int D;
	printf("enter the day(1-7)");
	scanf("%d",&D);
	switch(D){
		case 1:
			printf("Today is monday\n");
			break;
		
		case 2:
			printf("Today is tuesday\n");
			break;
		case 3:
			printf("Today is wednesday\n");
			break;
		case 4:
			printf("Today is thursday\n");
			break;
		case 5:
			printf("Today is friday\n");
			break;
		case 6:
			printf("Today is saturday\n");
			break;
		case 7:
			printf("Today is sunday\n");
			break;
		default:
				printf("enter a valid number");
				
				return 0;
			
	}
}