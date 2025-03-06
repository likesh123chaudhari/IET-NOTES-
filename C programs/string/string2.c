#include<stdio.h>

int main(){
	char str1[20];
	char str2[20];
	
	gets(str1);
	gets(str2);
	
	printf(strcat(str1,str2));
}
