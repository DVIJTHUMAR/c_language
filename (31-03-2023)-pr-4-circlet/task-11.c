#include<stdio.h>

main(){
	
	 int row, col, s;
	 
	 for(row=5; row>=1; row--){
	 	
	 	// space
	 	for(s=row; s>=1; s--){
	 		
	 		printf(" ");
		 }
	 	
	 	
	 	for(col=1; col<=5+1-row; col++){
	 		
	 		printf("%d",col);
		 }
	 	
	 	printf("\n");
	 }
}