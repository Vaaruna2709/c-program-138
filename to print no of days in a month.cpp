#include<stdio.h>
#include<math.h>

int main(){
	int m,y;
	printf("enter the year and month:");
	scanf("%d""%d",&y,&m);
	
	if(m==1 || m ==3 || m== 5 || m == 7 || m== 8 || m == 10 || m==12)
	printf("31days in this month");
	
	else if(m==2){
		if (y%4==0 && (y%400==0 || y%100 !=0))
		printf("29 days in this month");
		
		else
		printf("28 days in this month");
	}
	else if(m==4 || m ==6 || m== 9 || m == 11 )
	printf("30 days in this month");
	else
	printf("enter a valid number");
	
	return 0;
}
