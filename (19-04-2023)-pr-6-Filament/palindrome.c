// palindrome or not

#include <stdio.h>
#include <string.h>
	
main()
{
	char a[100], b[100];
	
		printf("Enter the string :- ");
		gets(a);
	
	strcpy(b, a); // Copying
	strrev(b); // Reversing
	
	if (strcmp(a, b) == 0){
		printf("The string is a palindrome\n");
	}else{
		printf("\nThe string is not t a palindrome\n");
	}
		
}