#include<stdio.h>

int main(){
	int a[5];
	printf("enter 5 values:");
	for(int i=0;i<5;i++){
			scanf("%d",&a[i]);
	}
	
	float avg;
	int sum =0;
	for(int i=0;i<5;i++){
		sum = sum +a[i];
	}
	avg = sum/5;
	int max = a[0];
	for(int j=0;j<5;j++){
		if(max<a[j])
		max = a[j];
	}
	int min = a[0];
	for(int j=0;j<5;j++){
		if(min>a[j])
		min = a[j];
	
}
   printf("max , min and avg are %d %d %f ",max,min,avg);
}