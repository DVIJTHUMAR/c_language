#include<stdio.h>

main(){
	
	// 1
	// 12
	// 123
	// 1234
	// 12345
	
	int row, col;
	
	for(row=1; row <= 5; row++){
		for(col=1; col <= row; col++){
			
			printf("%d",col);
		}
		printf("\n");
	}
}