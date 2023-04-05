#include<stdio.h>

main(){
	
	 int row, col, s;
	 
	 for(row=5; row>1; row--){
	 	for(col=1; col<=row; col++){
	 		
	 		printf("%d",col);
		 }
	 	
	 	// space
	 	for(s=2; s<=5+1-row; s++){
	 		
	 		printf(" ");
		 }
	 	// space
	 	for(s=2; s<=5+1-row; s++){
	 		
	 		printf(" ");
		 }
	 	
	 	for(col=row; col>=1; col--){
	 		
	 		printf("%d",col);
		 }
		
	 	printf("\n");
	 }
	 
	 for(row=1; row<=5; row++){
	 	for(col=1; col<=row; col++){
	 		
	 		printf("%d",col);
		 }
	 	
	 	// space
	 	for(s=2; s<=5+1-row; s++){
	 		
	 		printf(" ");
		 }
		 
		 // space
	 	for(s=2; s<=5+1-row; s++){
	 		
	 		printf(" ");
		 }
	 	
	 	for(col=row; col>=1; col--){
	 		
	 		printf("%d",col);
		 }
	 	
	 	printf("\n");
	}
}