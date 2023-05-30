#include<stdio.h>

main(){
	
	
	int row, col, s;
	
	for(row=1; row<=5; row++){
		
		// space (n+1-row)
		for(s=1; s<=5+1-row; s++){
			
			printf(" ");
		}
		
		
		for(col=1; col<=row; col++){
			
			printf("%d",row);
		}
		
		printf("\n");
	}
}