#include <stdio.h>
#include <math.h>

int main() {
	int y,m;
	printf("enter the year and month:");
	scanf("%d""%d",&y,&m);
	switch(m){
		case 1:
			printf("31 days in this month");
			break;
		case 2:
			if (y%4==0 && (y%400==0 || y%100 !=0)){
			
			printf("29 days in this month");
		}
			else{
			
			printf("28 days in this month");
		}
			break;
		case3:
			printf("31 days in this month");
			break;
		case 4:
			printf("30 days in this month");
			break;
		case 5:
			printf("31 days in this month");
			break;
		case 6:
			printf("30 days in this month");
			break;
		case 7:
			printf("31 days in this month");
			break;
		case 8:
			printf("31 days in this month");
			break;
		case 9:
			printf("30 days in this month");
			break;
		case 10:
			printf("31 days in this month");
			break;
		case 11:
			printf("30 days in this month");
			break;
		case 12:
			printf("31 days in this month");
			break;
			
	}
	return 0;
}