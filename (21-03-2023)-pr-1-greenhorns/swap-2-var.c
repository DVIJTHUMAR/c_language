#include <stdio.h>

main(){

//swap without third variable

	int x, y;
	
	printf("enter value X:-",x);
	scanf("%d",&x);
	
	printf("enter value Y:-",y);
	scanf("%d",&y);
	
	x=x+y;
	y=x-y;
	x=x-y;
	
	printf("X= %d \n",x);
	printf("Y= %d",y);
}