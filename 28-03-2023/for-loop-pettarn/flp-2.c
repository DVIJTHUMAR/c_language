#include<stdio.h>

main(){
	
	// 1
	// 21
	// 321
	// 4321
	// 54321
	
	int row, col;
	
	for(row=1; row <= 5; row++){
		for(col=1; col <= row; col++){
			
			printf("%d",row-col+1);
			
		}
		printf("\n");
	}
}