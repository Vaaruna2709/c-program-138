#include<stdio.h>
int main(){
	int n,s,k,i,j,t=0;
	printf("enter the size:");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements");
	
	for( i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("enter the number to be checked:");
	scanf("%d",&k);
	
	for(int i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			s=a[i]+a[j];
			if(k==s){
			printf("the pair is %d and %d",a[i],a[j]);
			t++;
		}}
	}
	
	if(t==0)
	printf("no pair found");
	
	
}


