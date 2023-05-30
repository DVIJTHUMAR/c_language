#include <stdio.h>

main(){
	
	int a=5, b=7,c=100, d=40;
	
	printf("Enter value of A :- ");
	scanf("%d", &a);

	printf("Enter value of B :- ");
	scanf("%d", &b);

	printf("Enter value of C :- ");
	scanf("%d", &c);

	printf("Enter value of D :- ");
	scanf("%d", &d);
	
	(a>b) ?
		(a>c) ?
			(a>d) ?
				printf("A is max")
			:
				printf("D is max")
		:
			(c>d) ?
				printf("C is max")
			:
				printf("D is max")
	:	(b>c) ?
			(b>d) ?
				printf("B is max")
			:
				printf("D is max")
		: 
			(c>d) ?
				printf("C is max")
			:
				printf("D is max");
			
}