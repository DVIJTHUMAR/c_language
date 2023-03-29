#include<stdio.h>

main(){
	
	// A
	// B C
	// D E F
	// G H I J
	// K L M N O
	
	char row, col, a='A';
	
	for(row=1; row <= 5; row++){
		for(col=1; col <= row; col++){
			
			printf("%c ",a);
			a++;
		}
		printf("\n");
	}
}