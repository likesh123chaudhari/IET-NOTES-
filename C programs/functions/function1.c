#include<stdio.h>
int add(int,int);
int main(){
	int x, y,sum;
	printf("Entre the the two values :");
	scanf("%d %d",&x,&y);
	sum=add(x,y);
	printf("sum of two number is : %d",sum);
}

int add(int x, int y){
	return x+y;
}
