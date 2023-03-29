#include <stdio.h>

main(){
	
	//n to 1
	
	int  n;
	
	printf("Enter value N :- ");
	scanf("%d",&n);
	
	do {
		
		printf("%d \n",n);
		n--; //n = n - 1
		
	} while(n >= 1);
	
}