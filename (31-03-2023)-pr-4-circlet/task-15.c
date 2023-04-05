#include<stdio.h>

main(){
	
	 int row, col, s;
	 
	 for(row=1; row<=5; row++){
	 	
	 	// space
	 	for(s=1; s<=5+1-row; s++){
	 		
	 		printf(" ");
		 }
	 	
	 	for(col=row; col>=1; col--){
	 		
	 		printf("%d",col);
		 }
	 	
	 	printf("\n");
	 }
}