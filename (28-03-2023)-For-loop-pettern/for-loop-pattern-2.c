#include<stdio.h>

main(){
	
	// 54321 * 7
	
	int row, col;
	
	for(row=1; row <= 7; row++){
		for(col=5; col >= 1; col--){
			
			printf("%d",col);
		}
		printf("\n");
	}
}