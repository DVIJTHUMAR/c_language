#include <stdio.h>

main(){

//swap without third variable

	int a, b;
	
	printf("enter value a:-",a);
	scanf("%d",&a);
	
	printf("enter value b:-",b);
	scanf("%d",&b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("a= %d \n",a);
	printf("b= %d",b);
}