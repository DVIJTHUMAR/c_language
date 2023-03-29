#include<stdio.h>

main(){
	
	// 1
	// 22
	// 333
	// 4444
	// 55555
	
	int row, col;
	
	for(row=1; row <= 5; row++){
		for(col=1; col <= row; col++){
			
			printf("%d",row);
			
		}
		printf("\n");
	}
}