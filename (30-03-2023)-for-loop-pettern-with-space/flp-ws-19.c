#include<stdio.h>
main(){
	int col,row;
	
	for(row=1;row<=5;row++){
		for(col=1;col<row;col++){
			printf(" ");
		}
		for(col=row;col<=5;col++){
			if(col%2==0){
				printf("%d",0);	
			}else{
				printf("%d",1);
			}
		}
		printf("\n");
	}
}