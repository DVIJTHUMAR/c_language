#include<stdio.h>

main(){
	
	
	int row, col, s, n='A';
	
	for(row=1; row<=5; row++){
		
		// space (n-1-row)
		for(s=1; s<=5+1-row; s++){
			
			printf(" ");
		}
		
		
		for(col=n; col>='A'; col--){
			
			printf("%c",col);
			
		}
		n++;
		
		printf("\n");
	}
}