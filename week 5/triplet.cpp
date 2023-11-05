#include<stdio.h>
int main(){
	int n,k,t=0;
	printf("enter the size");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements:");
	
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	printf("enter the element to be checked:");
	scanf("%d",&k);
	for(int i=0;i<n-2;i++){
		for(int j=i+1;j<n-1;j++){
			for(int m=j+1;m<n;m++){
				if(k==a[i]+a[j]+a[m]){
				printf("the triplet is %d %d %d \n",a[i],a[j],a[m]);
				t++;
			}}
		}
	}
	if(t==0)
	printf("no triplet satisfying the criteria found");
}
