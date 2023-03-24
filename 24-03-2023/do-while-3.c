#include <stdio.h>

main(){
	
	//1 to n
	
	int count=1, n;
	
	printf("Enter value N :- ");
	scanf("%d",&n);
	
	do {
		
		printf("%d \n",count);
		count++; //count = count + 1
		
	} while(count <= n);
	
}