#include<stdio.h>

main(){
	
	 int row, col, s;
	 
	 for(row=1; row<=5; row++){
	 	
	 	// space
	 	for(s=1; s<=5+1-row; s++){
	 		
	 		printf(" ");
		 }
	 	
	 	for(col=5; col>=5+1-row; col--){
	 		
	 		printf("%d",col);

		 }
		 for(col=7-row; col<=5; col++){
		 	
		 	printf("%d",col);
		 }
	 	
	 		printf("\n");
	 }
}