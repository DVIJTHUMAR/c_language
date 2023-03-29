#include <stdio.h>

main() {
   int n,x=1,total;
   
	printf("Enter value N :- =");
	scanf("%d",&n);
	
	do {
		
		total=(n * x);
		
		printf("%d * %d = %d \n", n, x, total);
		x++;
		
	} while(x <= 10);
	
}