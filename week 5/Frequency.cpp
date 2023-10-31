#include<stdio.h>
int main(){
	int n;
	printf("enter the size of the array:");
	scanf("%d",&n);
	int a[n];
	printf("enter elements of array:");
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	int k;
	printf("enter the number for which we have to find frequency:");
	scanf("%d",&k);
	int count =0;
	for(int i=0;i<n;i++){
		if(a[i]==k)
		count++;
		else
		count =0;
	}
	printf("the frequency of %d is %d",k,count);
	return 0;
}
