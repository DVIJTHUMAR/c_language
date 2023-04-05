#include<stdio.h>

main(){
	
	 int row, col;
	 
	 for(row=5; row>=1; row--){
	 	for(col=1; col<=5+1-row; col++){
	 		
	 		printf("%d",row);
		 }
	 	
	 	printf("\n");
	 }
}