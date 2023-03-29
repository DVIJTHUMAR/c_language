#include <stdio.h>

main(){
	
	// leap year
	
	int s=2000, e=3000;
	
//	printf("Enter value S-YEAR :- ");
//	scanf("%d",&s);
	
	printf("Enter value E-YEAR :- ");
	scanf("%d",&e);
	
	for(s=s; s <= e; s+=4){
		
		printf("%d \n",s);
		
	}
	
}