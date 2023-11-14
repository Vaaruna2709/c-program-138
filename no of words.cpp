#include<stdio.h>
#include<string.h>
int main(){
	char s[100];
	int k=0;
	printf("enter the string:");
	scanf("%[^\n]s",s);
	fflush(stdin);
    for(int i=0;s[i]!='\0';i++){
    	if(s[i] ==' ' && s[i+1]!=' ')
    	k++;
	}
	printf("the number of words in the string are %d",k+1);
}
