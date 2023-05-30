#include<stdio.h>

main(){
	
	// 54321
	// 4321
	// 321
	// 21
	// 1
	
	int row, col;
	
	for(row=5; row >= 1; row--){
		for(col=1; col <= row; col++){
			
			printf("%d",row-col+1);
			
		}
		printf("\n");
	}
}