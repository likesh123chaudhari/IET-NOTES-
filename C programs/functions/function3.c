#include<stdio.h>
void cubeOf(int);
int main(){
	int x, cube;
	scanf("%d",&x);
	cubeOf(x);
	
}
void cubeOf(int x){
	int res = x*x*x;
	 printf("Cube of %d is : %d",x,res);
}
