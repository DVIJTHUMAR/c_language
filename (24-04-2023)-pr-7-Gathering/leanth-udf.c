#include<stdio.h>

int lenth(char str[30])
{
 int i, len=0;

 for(i=0; str[i]!='\0'; i++)
 {
  len++;
 }

 return(len);
}

void main()
{
 char str[30];
 int i, len;

 printf("Enter string :- ");
 gets(str);

 len = lenth(str); /* Function Call */
 printf("\nLength of given string is :- %d", len);
}