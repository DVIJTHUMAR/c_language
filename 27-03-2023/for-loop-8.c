#include <stdio.h>

main(){
	
	int n, x=1, sum=0;
	
	printf("Enter value N :- ");
	scanf("%d",&n);
	
	for(x=x; x <= n; x++){
		
		sum += x;
		printf("Sum =  %d \n",sum);
		
	}
	
//	printf("Sum =  %d \n",sum);
	
}