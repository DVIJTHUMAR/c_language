#include <stdio.h>

main(){
	
	// leap year
	
	int s=2000, n;
	
	printf("Enter value N :- ");
	scanf("%d",&n);
	
	do {
		
		printf("%d \n",s);
		s+=4; //s = s + 4
		
	} while(s <= n);
	
}