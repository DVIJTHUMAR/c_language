#include <stdio.h>

main(){
	
	char ch ;
	
	printf("Enter any character :- ");
	scanf("%c",&ch);
	
	/* Alphabet check */
	
	if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){
		
		printf("%c This is character",ch);
		
	}else if(ch>= '0' && ch<= '9'){
		
		printf("%c This is Number",ch);
		
	}else {
		
		printf("%c This is special character",ch);
		
	}
	
}