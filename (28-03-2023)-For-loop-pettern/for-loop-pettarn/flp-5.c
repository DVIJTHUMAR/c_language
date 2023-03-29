#include<stdio.h>

main(){
	
	// 5
	// 45
	// 345
	// 2345
	// 12345
	
	int row, col;
	
	for(row=5; row >= 1; row--){
		for(col=5; col >= row; col--){
			
			printf("%d",row-col+5);
			
		}
		printf("\n");
	}
}