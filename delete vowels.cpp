#include<stdio.h>
#include<string.h>
int main(){
	char s[100];
	int length,j;
	printf("enter the string:");
	scanf("%[^\n]s",s);
	length = strlen(s);
	fflush(stdin);
	for(int i=0;i<length;i++){
	
    if(s[i]=='a'|| s[i]=='A'|| s[i]== 'e'|| s[i]=='E'|| s[i]=='i'||s[i]=='I'||s[i]=='o'||s[i]=='O'||s[i]=='u'||s[i]=='U'){
      for( j=i;j<length;j++){
	  
      s[j]=s[j+1];
      
	 
	 }j--;
	  length--;
	 }
	
	 }
	 printf("after deleting the vowels the string becomes %s ",s);
}
	 
	 
	 
	 
	 
	
