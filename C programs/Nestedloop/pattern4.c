#include<stdio.h>
int main()
{
	int i, j,k, num;
	printf("Enter a number :");
	scanf("%d",&num);
	
	for(i=num; i>=1; i--)	
	{
		for(j=1; j<=num; j++)
		{
			if(j>=i)
			{
				printf("*");
			}
			else{
				printf(" ");
			}
		}

		printf("\n");
		
	}
		
}
