#include<stdio.h>

main(){
	
	
	int row, col, s;
	
	for(row=5; row>=1; row--){
		
	// space (n-1-row)
		for(s=1; s<=5+1-row; s++){
			
			printf(" ");
		}
		
		for(col=row; col>=1; col--){
			
			printf("*");
		}
		
		printf("\n");
	}
}