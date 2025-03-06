#include<stdio.h>
int main()
{
	int i, m1,m2,m3,m4,m5, sum;
	float avg;
	for(i=1; i<=5; i++)
	{
		printf("Enter the marks of student :");
		scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
		
		sum = m1+m2+m3+m4+m5;
		avg = (float)sum/5;
		printf("Average marks of student is :%f\n", avg);
	}
	
}
