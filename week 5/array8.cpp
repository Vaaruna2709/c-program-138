#include<stdio.h>
int main(){
	int n;
	printf("enter the size of the array:");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements:");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]==a[j]){
				a[j]=a[j+1];
				j--;
				n--;
			}
		}
	}
	for(int i=0;i<n;i++)
	printf("%d",a[i]);
}
