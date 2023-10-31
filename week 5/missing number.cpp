#include<stdio.h>
int main(){
	int n;
	printf("enter the size of the array:");
	scanf("%d",&n);
	int a[n];
	printf("enter the n-1 natural numbers:");
	for(int i=0;i<n-1;i++){
		scanf("%d",&a[i]);
	}
	int s =0;
	for(int j=0;j<n-1;j++)
	s=s+a[j];
	
	int q=0;
	for(int m=1;m<=n;m++){
	q=q+m;}
	 
	 int c;
	 c= q-s;
	 printf("the missing element is %d",c);
	 return 0;
}
