#include<stdio.h>

main(){
	
	// -
	// | -
	// - | -
	// | - | -
	// - | - | -
	
	int row, col;
	
	for(row=0; row < 5; row++){
		for(col=0; col <= row; col++){
			
			if((row+col) % 2 == 0){
				printf("- ");
			}else{
				printf("| ");	
			}
		}
		printf("\n");
	}
}