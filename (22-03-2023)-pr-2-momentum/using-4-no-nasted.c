#include <stdio.h>

main(){
	
	int w, x, y, z;
	
	printf("Enter Value Of W :- ");
	scanf("%d",&w);
	
	printf("Enter Value Of X :- ");
	scanf("%d",&x);

	printf("Enter Value Of Y :- ");
	scanf("%d",&y);
	
	printf("Enter Value Of Z :- ");
	scanf("%d",&z);
		
	if(w>x){
		if (w>y){
			if (w>z){
				
				printf("W is max");
			
			}else {
				
				printf("Z is max");
			}
			
			
		}else {

			if (y>z){
				
				printf("Y is max");
			
			}else {
				
				printf("Z is max");	
			}
		} 	
			
	}else {
		
		if (x>y){
			if (x>z){
				
				printf("X is max");
			
			}else {
				
				printf("Z is max");
			}
			
		}else {
			if (y>z){
				
				printf("Y is max");
			
			}else {
				
				printf("Z is max");	
			}
		}
	}
}