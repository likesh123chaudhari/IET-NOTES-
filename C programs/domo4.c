#include<stdio.h>
int main()
{
	int a1,a2,a3,a4,a5,sum;
	float avg;
	printf("accept the marks : ");
	scanf("%d%d%d%d%d",&a1,&a2,&a3,&a4,&a5);
	sum=a1+a2+a3+a4+a5;
	avg=(float)sum/5;
	printf("average of marks :%f ",avg);
	
}
