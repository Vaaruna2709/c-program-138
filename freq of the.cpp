#include<stdio.h>
#include<string.h>
int main(){
	char s[100];
	int k=0;
	printf("enter the string:");
	scanf("%[^\n]s",s);
	fflush(stdin);
    for(int i=0;s[i]!='\0';i++){
    	if((s[i]=='t'|| s[i]=='T')&&(s[i+1]=='h'|| s[i+1]=='H')&& (s[i+2]=='e'||s[i+2]=='E'))
    	k++;
	}
	printf("the number of times the occurs in the string is %d",k);
}
