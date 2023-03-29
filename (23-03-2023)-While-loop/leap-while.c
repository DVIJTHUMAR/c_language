#include <stdio.h>

main(){
	
	// leap year
	
	int s=0, e;
	
//	printf("Enter value S-YEAR :- ");
//	scanf("%d",&s);
	
	printf("Enter value E-YEAR :- ");
	scanf("%d",&e);
	
	while(s < e){
		
		s+=4; //s = s + 4
		
	}
	
	if (s == e){	
		printf("This is Leap-Year");
	} else {
		printf("This is not Leap-Year");
	}
	
}