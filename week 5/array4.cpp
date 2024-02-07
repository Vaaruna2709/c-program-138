#include<stdio.h>
int main(){
	int t,n;
	printf("enter the size(even) of the array:");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements:");
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(int i=0;i<n;i=i+2){
		t=a[i];
		a[i]=a[i+1];
		a[i+1]=t;
	}
	printf("after swapping:");
	for(int i =0;i<n;i++){
		printf("%d ",a[i]);
	}
}
