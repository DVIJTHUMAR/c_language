#include<stdio.h>

main(){
	
	
	int row, col, s;
	
	for(row=0; row<5; row++){
		
		// space (n-1-row)
		for(s=1; s<=5+1-row; s++){
			
			printf(" ");
		}
		
		
		for(col=0; col<=row; col++){
			
			if(col % 2 == 0){
				printf("1");
			}else {
				printf("0");
			}
		}
		
		printf("\n");
	}
}