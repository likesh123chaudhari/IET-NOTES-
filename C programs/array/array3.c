#include <stdio.h>
int main(){

int a[5],e[5],o[5],i;
printf("Enter the elemnts in array :");
for(i=0;i<5;i++)
scanf("%d",&a[i]);
int ev = 0, od = 0;
for(i=0;i<5;i++){
	if(a[i]%2==0){
		
		e[ev] = a[i];
		ev++;
		
	}
	else{
		o[od] = a[i];
		od++;
	}	
}
printf("Even Element :");
for(i =0; i<ev; i++)
printf("%d\t",e[i]);
printf("odd Element :");
for(i =0; i<od; i++)
printf("%d\t",o[i]);


}

