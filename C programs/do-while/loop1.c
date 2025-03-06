#include<stdio.h>
int main()
{
	int num, sum = 0;
	do
	{
		printf("enter a number\n");
		scanf("%d", &num);
		sum = sum + num;	
	}
	 while (num != 0);
	printf("sum =%d", sum);
}

