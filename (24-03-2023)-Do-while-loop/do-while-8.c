#include <stdio.h>

main(){
	
	int n, x=1, sum=0;
	
	printf("Enter value N :- ");
	scanf("%d",&n);
	
	do {
		
		sum += x;
		x++;
		
//		printf("Sum =  %d \n",sum);
		
	} while(x <= n);
	
	printf("Sum =  %d \n",sum);
	
}