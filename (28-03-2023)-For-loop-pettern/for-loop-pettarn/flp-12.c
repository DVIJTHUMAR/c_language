#include<stdio.h>

main(){
	
	// 55555
	// 4444
	// 333
	// 22
	// 1
	
	int row, col;
	
	for(row=5; row >= 1; row--){
			
		for(col=1; col <= row; col++){
			
		}
		for(col=5; col >= 5-row+1; col--){
			printf("%d",row);
		}
		printf("\n");
	}
}