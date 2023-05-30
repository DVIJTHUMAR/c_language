#include<stdio.h>
#include<string.h>

main()
{
	char n[100];
	
	printf("Enter String :- \n");
	gets(n);
	
	strupr(n); // Upercase
	
	puts(n);
}