#include<stdio.h>
main(){
	 
	int a, b; 
	
	printf("1. recharge\n");
	printf("2. balance\n");
	printf("3. last date\n");
	printf("4. upcoming plan\n");
	printf("5. recharge for friend\n");
	
	printf("Enter No. = ");
	scanf("%i",&a);
	
	
	switch(a){
		case 1:
			printf("1. RS. 199 \n");
			printf("2. RS. 299 \n");
			printf("3. RS. 399 \n");
			printf("4. RS. 499 \n");
			printf("5. RS. 599 \n");
			
			printf("Enter No. = ");
			scanf("%i",&b);
			switch(b){
				case 1:
					printf("");
					break;
				case 2:
					printf("");
					break;
				case 3:
					printf("");
					break;
				case 4:
					printf("");
					break;
				case 5:
					printf("");
					break;
				default:
					printf("");
					break;
			}
			break;
		case 2:
			printf("1. your current balance\n");
			printf("2. your last 5 calls\n");
			printf("3. your last 5 sms\n");
			printf("4. your last 5 mms\n");
			printf("5. your top-up balance\n");
			
			printf("Enter No. = ");
			scanf("%i",&b);
			switch(b){
				case 1:
					printf("unlimited");
					break;
				case 2:
					printf("a");
					break;
				case 3:
					printf("a");
					break;
				case 4:
					printf("a");
					break;
				case 5:
					printf("a");
					break;
				default:
					printf("Plz Enter Vaild no.");
					break;
			}
			break;
		case 3:
			printf("1. last date for current balance\n");
			printf("2. last date for top-up balance\n");
			printf("3. last date for incoming\n");
			printf("4. last date for outgoing\n");
			
			
			printf("Enter No. = ");
			scanf("%i",&b);
			switch(b){
				case 1:
					printf("a");
					break;
				case 2:
					printf("a");
					break;
				case 3:
					printf("a");
					break;
				case 4:
					printf("a");
					break;
				default:
					printf("Plz Enter Vaild no.");
					break;
			}
			break;
		case 4:
			printf("1. your main upcoming plan\n");
			printf("2. your top-up upcoming plan\n\n");
			
			
			printf("Enter No. = ");
			scanf("%i",&b);
			switch(b){
				case 1:
					printf("a");
					break;
				case 2:
					printf("a");
					break;
				
				default:
					printf("Plz Enter Vaild no.");
					break;
			}
		case 5:
			printf("1. recharge plan\n");
			printf("2. sim no.\n");
			printf("3. \n");
			printf("4. gr\n");
			printf("5. rs\n");
			printf("6. df\n\n");
			
			printf("Enter No. = ");
			scanf("%i",&b);
			switch(b){
				case 1:
					printf("a");
					break;
				case 2:
					printf("a");
					break;
				case 3:
					printf("a");
					break;
				case 4:
					printf("a");
					break;
				default:
					printf("Plz Enter Vaild no.");
					break;
			}
			break;
			break;
		default:
			printf("Plz Enter Vaild no.");
			break;
	}
}
