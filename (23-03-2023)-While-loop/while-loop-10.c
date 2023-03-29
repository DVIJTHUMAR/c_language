#include <stdio.h>

main() {
   int n,x=1,total;
   
	printf("Enter value N :- =");
	scanf("%d",&n);
	
	while(x <= 10){
	
		total=(n * x);
		
		printf("%d * %d = %d \n", n, x, total);
		x++;
	}
	
}