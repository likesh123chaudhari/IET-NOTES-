#include <stdio.h>
int main(){

int a[5],i;
printf("Enter the elemnts in array :");
for(i=0;i<5;i++)
scanf("%d",&a[i]);

for(i=0;i<5;i++)
printf("%d\t",a[i]);

printf("%d\n",a[0]);
printf("%d\n",&a[0]);
printf("%d\n",&a[1]);

}

