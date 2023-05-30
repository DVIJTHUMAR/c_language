#include <stdio.h>

main() {
	
//	multiplication
	
   int n,x=1,total;
   
	printf("Enter value N :- =");
	scanf("%d",&n);
	
	for(x=x; x <= 10; x++){
	
		total=(n * x);
		
		printf("%d * %d = %d \n", n, x, total);
	}
	
}