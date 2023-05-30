#include<stdio.h>
main(){
	int n,x;
	
	printf("Enter value of length :- ");
	scanf("%d",&n);
	
	int array[n];
	
	for(x=0; x<n; x++){
		printf("\nEnter value of %d :- ",x);
		scanf("%d",&array[x]);
	}
	printf("\nReverse value :- ");
	for(x=(n-1); x>=0; x--){	
		printf("%d ",array[x]);
	}
}
