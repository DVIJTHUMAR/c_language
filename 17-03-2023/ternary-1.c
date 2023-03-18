#include <stdio.h>

main(){
	
	int a=5, b=7;
	
	printf("Enter value of A :- ");
	scanf("%d", &a);

	printf("Enter value of B :- ");
	scanf("%d", &b);
	
	(a>b) ? 
			printf("A is max")
		: 
			printf("B is max");
	
}