#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
	char s[100];
	int i=0, length;
	printf("enter the string:");
	scanf("%s",s);
	length = strlen(s);
	fflush(stdin);
	while(i<length){
	 if(s[i]> 64 && s[i]< 91){
	 	s[i]=s[i]+32;
	 	
	 }	i++;
	}
    printf("%s",s);
}
