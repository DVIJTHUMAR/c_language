#include <stdio.h>

main(){

//swap with third variable

	int x, y, z;
	
	printf("Enter value X:-",x);
	scanf("%d",&x);
	
	printf("Enter value Y:-",y);
	scanf("%d",&y);
	
	z=x;
	x=y;
	y=z;
	
	printf("X= %d \n",x);
	printf("Y= %d",y);
}