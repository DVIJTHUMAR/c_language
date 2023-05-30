#include<stdio.h>

main(){
	int i;
	char n[100];
	
	printf("Enter a string :- ");
 	gets(n);
	
	printf("String :- ");
	
	for(i=0; n[i] != NULL; i++)
	{
		printf("%c",n[i]);	                      
	}
	
	printf("\n");
	
	printf("string revers :- ");
	
	for(i=i; i>=0; i--)
	{
		printf("%c",n[i]);	                      
	}
		                      
}
 