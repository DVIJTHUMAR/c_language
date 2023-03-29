#include<stdio.h>

main(){
	
	// 1
	// 2 3
	// 4 5 6
	// 7 8 9 10
	// 11 12 13 14 15
	
	int row, col, a=1;
	
	for(row=1; row <= 5; row++){
		for(col=1; col <= row; col++){
			
			printf("%d ",a);
			a++;
		}
		printf("\n");
	}
}