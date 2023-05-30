#include<stdio.h>
#include<string.h>

main()
{
	int i;
	char n[100];
	
	printf("Enter lawercase Value :- ");
	gets(n);
	
	for(i=0; n[i] != NULL; i++){
		
		printf("%c",n[i]-32);
	}
}