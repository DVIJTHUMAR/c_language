#include<stdio.h>

main(){
	
	int row, col, s;
	
	for(row=4; row>=1; row--){
		
		for(s=1; s<=row; s++){
			printf(" ");
		}
		
		for(col=row; col<=row; col++){
			
			printf("*");
		}
		
		for(s=4; s>row; s--){
			printf(" ");
		}
		
		for(s=3; s>row; s--){
			printf(" ");
		}
		
		for(s=s; s>=row; s--){
			
			printf("*");
		}
			printf("\n");
	}
}