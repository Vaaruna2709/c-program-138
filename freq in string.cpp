#include<stdio.h>
#include<string.h>
int main(){
	char s[100];
	int v=0,c=0,d=0,w=0;
	printf("enter the string:");
	scanf("%[^\n]s",s);
	fflush(stdin);
    for(int i=0;s[i]!='\0';i++){
     if((s[i]>='A'&& s[i]<='Z')||(s[i]>='a' && s[i]<='z')){
     	if(s[i]=='a'|| s[i]=='A'|| s[i]== 'e'|| s[i]=='E'|| s[i]=='i'||s[i]=='I'||s[i]=='o'||s[i]=='O'||s[i]=='u'||s[i]=='U'){
     		v++;
		 }
		 else
		 c++;
	 }
	 if(s[i]<=9 && s[i]>=0){
	 	d++;
	 }
	 if(s[i]==' ')
	 w++;
	}
	printf("Number of vowels %d\n ",v);
   	printf("Number of consonants %d\n ",c);
	printf("Number of digits %d\n ",d);
	printf("Number of white spaces %d\n ",w);
	
}
