#include<stdio.h>  
int main()  
{  
    int a[10];
int i, *ptr;  
 
    printf("Enter value of numbers:- ", a);  
    for(i = 0; i < 5; i++){
    scanf("%d", &a[i]);  
}  
         
    ptr = &a[5 - 1];  
 
    printf("Elements of array in reverse order:- ");  
    for(i = 0; i < 5; i++){
    printf("%d", *ptr--);  
}  
       
 
}