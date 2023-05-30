#include<stdio.h>

main(){
	
	
	int row, col, s, n;
	
	for(row='E'; row>='A'; row--){
		
		// space (n-1-row)
		for(s=1; s<=5+1-row; s++){
			
			printf(" ");
		}
		
		
		for(col='A'; col<=row; col++){
			
			printf("%c",col);
			
		}
		
		printf("\n");
	}
}