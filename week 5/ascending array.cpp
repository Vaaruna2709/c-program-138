#include<stdio.h>
int main(){
	int n,i,j,t;
printf("enter the number of elememts in the array:");
scanf("%d",&n);
printf("enter the elements:");
int arr[n];
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
for(i=0;i<n-1;i++){
	for(j=0;j<n;j++){
    if(arr[j]>arr[j+1])
    { t= arr[j];
    arr[j]=arr[j+1];
	arr[j+1]=	t;}
}

}
printf("Array in ascending order is:");
for(int k=0;k<n;k++){
	printf("%d ",arr[k]);
}
}

