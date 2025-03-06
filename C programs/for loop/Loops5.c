#include<stdio.h>
int main()
{
	int i,num, result;
	printf("Enter the number for Table :");
	scanf("%d",&num);
	
	for(i=1; i<=10; i++)
	{
		result = num*i;
		printf("%d * %d = %d\n", num,i,result);
	}
}
