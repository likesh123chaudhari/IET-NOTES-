#include<stdio.h>
int add();
int main(){
	int sum;
	sum=add();
	printf("sum of three number is : %d",sum);
}

int add(){
	int	x = 3, y = 8, z = 2;
	return x+y+z;
}
