#include<stdio.h>

main(){
	
	// 12345
	// 1234
	// 123
	// 12
	// 1
	
	int row, col;
	
	for(row=1; row <= 5; row++){
		for(col=1; col <= row; col++){
			
			
		}
		for(col=1; col <= (5-row+1); col++){
			
				printf("%d",col);		
			}
			printf("\n");
	}
	
}