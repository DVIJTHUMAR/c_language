#include <stdio.h>

main(){
	
// factorial number

	int n, a=1, factorial=1;
	
	printf("Enter value N :- ");
	scanf("%d",&n);
	
	do {
		
		factorial *= a;
		a++;
		
//		printf("Factorial =  %d \n",factorial);
		
	} while(a <= n);

	printf("Factorial =  %d \n",factorial);
	
}