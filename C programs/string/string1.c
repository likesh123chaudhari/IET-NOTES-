#include<stdio.h>

int main(){
	char str1[20] = "mam";
	int len = strlen(str1);
	char temp[len];
	strcpy(temp, str1);
	strrev(str1);
	if(strcmp(str1,temp)){
		printf("Not Palindram");
	}
	else
		printf("Palindram");
}
