#include<stdio.h>
main(){
	int col,row;
	
	for(row=1;row<=5;row++){
		for(col=1;col<(6-row);col++){
			printf(" ");
		}
		for(col=1;col<=row;col++){
			if(col%2==0){
				printf("-");	
			}else{
				printf("|");
			}
		}
		printf("\n");
	}
}