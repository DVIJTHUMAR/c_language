#include<stdio.h>

main(){
	
	
	int row, col, s;
	
	for(row=5; row>=1; row--){
		
		// space (row)
		for(s=1; s<=row; s++){
			
			printf(" ");
		}
		
		
		for(col=5; col>=row; col--){
			
			printf("%d",row);
		}
		
		printf("\n");
	}
}