#include <stdio.h>

main(){

//swap with third variable

	int a, b, x;
	
	printf("enter value a:-",a);
	scanf("%d",&a);
	
	printf("enter value b:-",b);
	scanf("%d",&b);
	
	x=a;
	a=b;
	b=x;
	
	printf("a= %d \n",a);
	printf("b= %d",b);
}