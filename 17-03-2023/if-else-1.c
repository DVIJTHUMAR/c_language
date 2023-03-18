#include <stdio.h>

main(){
	
	int a, b, c;
	
	printf("Enter Value Of A :- ");
	scanf("%d",&a);
	
	printf("Enter Value Of B :- ");
	scanf("%d",&b);

	printf("Enter Value Of C :- ");
	scanf("%d",&c);
	
	if(a>b){
		if (a>c){
			
			printf("A is max");
			
		}else {

			printf("C is max");
		} 	
		
		
	}else {
		
		if (b>c){
			
			printf("B is max");
			
		}else {
			
			printf("C is max");
		}
	}
}