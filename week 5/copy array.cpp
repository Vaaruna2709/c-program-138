#include<stdio.h>
int main(){
	int n,i=0;
	printf("enter size:");
	scanf("%d",&n);
	int a[n];
	printf("enter the array elements:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int a2[n];
	for(i=0;i<n;i++){
		a2[i]=a[i];
	}
	printf("the first array is:");
	for(i=0;i<n;i++)
	printf("%d",a[i]);
	printf("the duplicate array is :");
	for(i=0;i<n;i++)
	printf("%d",a2[i]);
}
