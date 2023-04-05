#include<stdio.h>

main(){
	
	 int row, col;
	 
	 for(row='A'; row<='E'; row++){
	 	for(col='A'; col<=row; col++){
	 		
	 		printf("%c",row);
		 }
	 	
	 	printf("\n");
	 }
}