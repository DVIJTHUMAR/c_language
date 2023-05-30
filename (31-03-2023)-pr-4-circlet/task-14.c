#include<stdio.h>

main(){
	
	 int row, col, s;
	 
	 for(row=5; row>=1; row--){
	 	
	 	// space
	 	for(s=1; s<=row; s++){
	 		
	 		printf(" ");
		 }
	 	
	 	for(col=row; col<=5; col++){
	 		
	 		printf("%d",col);
		 }
	 	
	 	printf("\n");
	 }
}