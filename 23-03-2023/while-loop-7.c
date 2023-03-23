#include <stdio.h>

main(){
	
	// leap year
	
	int count=2000, n;
	
	printf("Enter value N :- ");
	scanf("%d",&n);
	
	while(count <= n){
		
		printf("%d \n",count);
		count+=4; //count = count + 4
		
	}
	
}