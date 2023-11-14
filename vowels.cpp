#include<stdio.h>
#include<string.h>
int main(){
	char s[100];
	int i;
	printf("enter the string:");
	scanf("%s",s);
	int str_length = strlen(s);
	for(i=0;i<str_length;i++){
		if(s[i]=='a'|| s[i]=='A'|| s[i]== 'e'|| s[i]=='E'|| s[i]=='i'||s[i]=='I'||s[i]=='o'||s[i]=='O'||s[i]=='u'||s[i]=='U'){
			printf("the vowel in the string is\n");
			printf("%c",s[i]);
		}
	}
}
