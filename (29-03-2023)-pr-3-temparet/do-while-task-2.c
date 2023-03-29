#include<stdio.h>

main(){
	int a, b=1, total;
	
	printf("Enter table value:- ");
	scanf("%d",&a);
	
	do{
		total= (a * b);
		printf("%d * %d = %d \n",a, b, total);
		b++;
	}while(b<=10);
}