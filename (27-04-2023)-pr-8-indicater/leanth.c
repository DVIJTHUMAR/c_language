#include<stdio.h>
#include<string.h>
main(){
	char arr[100];
	
	printf("Enter String = ");
	gets(arr);
	
	int *p;
	p=&arr;
	
	strlen(*p);
	printf("String = ");
	puts(p);
	printf("Length of String = %d",strlen(p));
	
	
}