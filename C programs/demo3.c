#include <stdio.h>

int main()
{
	int radius;
	const float pi=3.14f;
	float area;
	printf("enter the value of radius :");
	scanf("%d",&radius);
	area = 2*pi*radius;
	
	printf("area of circum :%f",area);
	
}
