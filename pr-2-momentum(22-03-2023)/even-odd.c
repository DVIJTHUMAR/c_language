#include <stdio.h>

main(){
	
	int n;
	
	printf("Enter Even or Odd no :- ");
	scanf("%d",&n);
	
	(n % 2 == 0) ? printf("%d is Even number ",n) : printf("%d is Odd numbe :- ",n);
	
}