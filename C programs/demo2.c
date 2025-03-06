#include <stdio.h>

int main()
{
	int radius;
	const float pi=3.14;
	float area;
	printf("enter the value of radius :");
	scanf("%d",&radius);
	area = pi*radius*radius;
	
	printf("area of circle :%f",area);
	
}
