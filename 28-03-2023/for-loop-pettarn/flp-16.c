#include<stdio.h>
main(){
	
	// 1 0 1 0 1
	// 0 1 0 1
	// 1 0 1
	// 0 1 
	// 1
	
	int row, col;
	
	for(row=5; row > 0; row--){
		for(col=1; col <= row; col++){
			
			if((row+col) % 2 == 0){
				printf("1 ");
			}else{
				printf("0 ");	
			}
		}
		printf("\n");
	}
}