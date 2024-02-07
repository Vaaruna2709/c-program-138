#include<stdio.h>
int main(){
int n,j,i,t;
printf("enter the number of elements in the array");
scanf("%d",&n);
int a[n];
printf("enter the elements:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n-1;i++){
	for(j=0;j<n;j++){
		if(a[j]>a[j+1])
		{t=a[j];
		a[j]=a[j+1];
		a[j+1]=t;
		}
	}

}
printf("enter k value:");
int k;
scanf("%d",&k);
printf("%d largest element is %d and %d smallest element is %d",k,a[n-k],k,a[k]);
return 0;
}

