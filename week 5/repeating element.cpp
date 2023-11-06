#include<stdio.h>
int main(){
	int n;
	printf("enter size:");
	scanf("%d",&n);
	int a[n];
	printf("enter the array elements:");
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
    int t=0,c=0;
    for(int i=0;i<n;i++){
    	for(int j=i+1;j<n;j++){
    		if(a[j]==a[i]){
    			printf("%d %d",i,a[i]);
    			c++;
			t++;
    			break;
			}
		}
	    if(c==1)
            break;
	    
	}
	if(t==0)
	printf("no repeating element");
}
