#include<stdio.h>
#include<string.h>
int main(){
	char s[100];
	int k,i;
	char m;
	printf("enter the string:");
	scanf("%s",s);
	fflush(stdin)
	printf("enter the character to be added ");
	
	scanf("%c",&m);
	printf("enter the position");
	scanf("%d",&k);
	int length = strlen(s);
	for(i=length;i>k;i--){
		s[i]=s[i-1];
	}
	s[k]=m;
	printf("New array is %s",s);
	
}
