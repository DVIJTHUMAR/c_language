#include<stdio.h>
main(){
	
	// 1
	// 0 1
	// 1 0 1
	// 0 1 0 1
	// 1 0 1 0 1
	
	int row, col;
	
	for(row=0; row < 5; row++){
		for(col=0; col <= row; col++){
			
			if((row+col) % 2 == 0){
				printf("1 ");
			}else{
				printf("0 ");	
			}
		}
		printf("\n");
	}
}