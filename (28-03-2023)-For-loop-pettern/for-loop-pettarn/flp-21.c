#include<stdio.h>
main(){
	
	// A
	// A B
	// A B C
	// A B C D
	// A B C D E
	
	char col,row;
	
	for(row='A'; row<='E'; row++){
		for(col='A'; col<=row; col++){
			
			printf("%c ",col);
		}
			printf("\n");
	}
}