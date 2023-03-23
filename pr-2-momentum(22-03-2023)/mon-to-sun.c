#include <stdio.h>
#include <string.h>

main(){
	
	char a[3];
	
	printf("Enter char for day :- ");
	scanf("%s",&a);
	
	switch('a'){	
		
		case 'sa': 
			printf("Sunday");
			break;
		case 'm':
			printf("Monday");
			break;
		case 'T': 
			printf("Teusday");
			break;
		case 'w': 
			printf("Wednsday");
			break;
		case 't': 
			printf("Tursday");
			break; 
		case 'f': 
			printf("Friday");
			break;
		case 's': 
			printf("Saterday");
			break;
			
		default:
			printf("Plz Entre value between a to z");
			break;
	}
	
}