#include<stdio.h>
int cubeOf(int);
int main(){
	int x, cube;
	scanf("%d",&x);
	cube = cubeOf(x);
	printf("Cube of %d is : %d",x,cube);
}
int cubeOf(int x){
	return x*x*x;
}
