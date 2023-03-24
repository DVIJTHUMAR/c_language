#include <stdio.h>

main(){
	
	// Even
	
	int  n;
	
	printf("Enter value N :- ");
	scanf("%d",&n);
	
	do {
		
		printf("%d \n",n);
		n-=2; //n = n - 2
		
	} while(n >= 0);
	
}