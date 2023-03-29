#include <stdio.h>

main(){
	
	int a;
	
	printf("Enter no value for day :- ");
	scanf("%d",&a);
	
	switch(a){
		
		case 1: 
			printf("Sunday");
			break;
		case 2: 
			printf("Monday");
			break;
		case 3: 
			printf("Teusday");
			break;
		case 4: 
			printf("Wednsday");
			break;
		case 5: 
			printf("Tursday");
			break; 
		case 6: 
			printf("Friday");
			break;
		case 7: 
			printf("Saterday");
			break;
			
		default:
			printf("Plz Entre value between 1 to 7");
			break;
	}
	
}