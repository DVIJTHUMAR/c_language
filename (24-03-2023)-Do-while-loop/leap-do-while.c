#include <stdio.h>

main(){
	
	// leap year
	
	int s=0, e;
	
	printf("Enter value E :- ");
	scanf("%d",&e);
	
	do {
		
		s+=4; //s = s + 4
		
	} while(s < e);
	
	if (s == e){	
		printf("This is Leap-Year");
	} else {
		printf("This is not Leap-Year");
	}
	
}