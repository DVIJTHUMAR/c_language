#include <stdio.h>

main(){
	
	// leap year
	
	int s=2000, e=3000;
	
	printf("Enter value S-YEAR :- ");
	scanf("%d",&s);
	
	printf("Enter value E-YEAR :- ");
	scanf("%d",&e);
	
	while(s <= e){
		
		printf("%d \n",s);
		s+=4; //s = s + 4
		
	}
	
}