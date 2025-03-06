#include<stdio.h>
int main()
{
	int i, result=1, num;
	printf("Enter a number :");
	scanf("%d", &num);
	for (i=1; i<=num; i++)
	{
		result = result*i;
	}
	printf("factorial of the %d is %d",num,result);
}
