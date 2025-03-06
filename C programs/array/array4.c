#include<stdio.h>
int main()
{
	int a[5],i,sum=0;
	float avg;
	printf("enter elements\n");
 	for(i=0;i<=4;i++)
	scanf("%d",&a[i]);

	for(i=0;i<=4;i++)
	sum=sum + a[i];

	avg=(float)sum/5;
	printf("average=%f",avg);
}
