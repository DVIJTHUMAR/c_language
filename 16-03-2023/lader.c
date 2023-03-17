#include <stdio.h>

main(){
	
	int a;
	
	printf("Enter Value Of A :- ");
	scanf("%d",&a);
	
	
	if(a>=1){
		
		printf("positive");
	}else if(a<0){
		
		printf("nagetive");
	}else{
		
		printf("zero");
	}
	
}