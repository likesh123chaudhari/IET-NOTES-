#include <stdio.h>
int main(){

int a[5];
int i;
printf("accept elements of array\n");
for(i=0;i<=4;i++)
scanf("%d",(a+i));
printf("display elements of array\n");
for(i=0;i<=4;i++)
printf("elements at %d : %d\n",i,*(a+i));

}




