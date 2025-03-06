#include<stdio.h>

int main(){
	char str1[20];
	char str2[20];
	
	gets(str1);
	strcpy(str2,str1);
	
	printf("target string is :%s",str2);
}
