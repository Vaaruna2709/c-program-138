#include<stdio.h>
int main(){
int n,j,i,t;
printf("enter the number of elements in the array");
scanf("%d",&n);
int arr[n];
printf("enter the elements:");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);

for(i=0;i<(n+1)/2;i++){
	t=arr[i];
	arr[i]=arr[n-1-i];
	arr[n-1-i]=t;
}
printf("after reversing the array is:");
for(j=0;j<n;j++)
printf("%d ",arr[j]);

return 0;
}
