#include<stdio.h>

main(){
	
	// 5
	// 44
	// 333
	// 2222
	// 11111
	
	int row, col;
	
	for(row=5; row >= 1; row--){
		for(col=5; col >= row; col--){
			
			printf("%d",row);
			
		}
		printf("\n");
	}
}