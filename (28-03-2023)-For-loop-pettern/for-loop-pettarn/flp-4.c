#include<stdio.h>

main(){
	
	// 5
	// 54
	// 543
	// 5432
	// 54321
	
	int row, col;
	
	for(row=5; row >= 1; row--){
		for(col=5; col >= row; col--){
			
			printf("%d",col);
		}
		printf("\n");
	}
}