#include<stdio.h>

main(){
	
	int arr[5][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20}};
	int r,c;
	
	for(r=0; r<5; r++){
		for(c=0; c<4; c++){
			
			printf("Enter Matrix Value arr[%d][%d] :- ",r,c);
			scanf("%d",&arr[r][c]);
		}
	}
	
	for(r=0; r<5; r++){
		for(c=0; c<4; c++){
			
			printf("%d ",arr[r][c]);
		}
		printf("\n");
	}
}