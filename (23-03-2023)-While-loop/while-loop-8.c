#include <stdio.h>

main(){
	
//	sum
	
	int n, x=1, sum=0;
	
	printf("Enter value N :- ");
	scanf("%d",&n);
	
	while(x <= n){
		
		sum += x;
		x++;
//		printf("Sum =  %d \n",sum);
		
	}
	
	printf("Sum =  %d \n",sum);
	
}