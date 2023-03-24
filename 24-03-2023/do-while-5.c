#include <stdio.h>

main(){
	
	// Odd
	
	int count=1, n;
	
	printf("Enter value N :- ");
	scanf("%d",&n);
	
	do {
		
		printf("%d \n",count);
		count+=2; // count = count + 2
		
	} while(count <= n);
	
}