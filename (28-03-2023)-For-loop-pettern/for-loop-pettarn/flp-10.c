#include<stdio.h>

main(){
	
	// 54321
	// 5432
	// 543
	// 54
	// 5
	
	int row, col;
	
	for(row=5; row >= 1; row--){
		
		for(col=5; col >= (5-row+1); col--){
			
				printf("%d",col);		
			}
				printf("\n");
			
	}
	
}