#include<stdio.h>
int main(){
	int n;
	printf("enter size:");
	scanf("%d",&n);
	int a[n];
	printf("enter the array elements:");
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
    int t,found=0;
    for(int i=0;i<n;i++){
    	t=0;
    	for(int j=i+1;j<n;j++){
    		if(a[j]==a[i]){
    			t++;
    			break;
			}
		}
		if(t==0){
	found++;
	printf("the first non repeating element is %d\n",a[i]);
		break;}
	}
	if(found!=1)
	printf("no non repeating element found");
	
}
