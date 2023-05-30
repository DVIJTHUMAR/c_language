#include <stdio.h>

main(){
	
	int a=5, b=70 ,c=10;
	
	printf("Enter value of A :- ");
	scanf("%d", &a);

	printf("Enter value of B :- ");
	scanf("%d", &b);

	printf("Enter value of C :- ");
	scanf("%d", &c);
	
	(a>b) ?
		(a>c) ?
			printf("A is max")
		:
			printf("C is max")
		:
	(b>c) ?
			printf("B is max")
		:
			printf("C is max");
		
}