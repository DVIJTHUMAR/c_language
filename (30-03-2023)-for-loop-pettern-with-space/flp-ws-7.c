#include<stdio.h>

main(){
	
	
	int row, col, s;
	
	for(row=1; row<=5; row++){
		
		// space (row)
		for(s=1; s<=row; s++){
			
			printf(" ");
		}
		
		
		for(col=1; col<=5+1-row; col++){
			
			printf("%d",col);
		}
		
		printf("\n");
	}
}