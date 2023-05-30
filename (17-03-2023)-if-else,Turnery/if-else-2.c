#include <stdio.h>

main(){
	
	int a, b, c, d;
	
	printf("Enter Value Of A :- ");
	scanf("%d",&a);
	
	printf("Enter Value Of B :- ");
	scanf("%d",&b);

	printf("Enter Value Of C :- ");
	scanf("%d",&c);
	
		printf("Enter Value Of D :- ");
	scanf("%d",&d);
		
	if(a>b){
		if (a>c){
			if (a>d){
				
				printf("A is max");
			
			}else {
				
				printf("D is max");
			}
			
			
		}else {

			if (c>d){
				
				printf("C is max");
			
			}else {
				
				printf("D is max");	
			}
		} 	
			
	}else {
		
		if (b>c){
			if (b>d){
				
				printf("B is max");
			
			}else {
				
				printf("D is max");
			}
			
		}else {
			if (c>d){
				
				printf("C is max");
			
			}else {
				
				printf("D is max");	
			}
		}
	}
}