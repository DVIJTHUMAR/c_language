#include <stdio.h>

main(){
	
	int n, x=1, mul=1;
	
	printf("Enter value N :- ");
	scanf("%d",&n);
	
	for(x=x; x <= n; x++){
		
		mul *= x;
		
		printf("Mul =  %d \n",mul);
		
	}
	
//	printf("Sum =  %d \n",sum);
	
}