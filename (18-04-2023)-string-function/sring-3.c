#include<stdio.h>
#include<string.h>

main()
{
	int i, j=0;
	char n[100];
	
	printf("Enter Value :- ");
	gets(n);
	

	for(i=0; n[i] != NULL; i++){
		
		j++;
	}
	
	printf("Lenth :- %d",j);
}