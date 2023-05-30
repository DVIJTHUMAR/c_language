#include<stdio.h>

swap(int *n1,int *n2)
{
	int *t;
	t=n1;
	n1=n2;
	n2=t;
	
	printf("a = %d , b = %d",*n1,*n2);
}

main()
{
	int a=12 ,b=5;
	
	printf("Enter value of a :- ");
	scanf("%d",&a);
	
	printf("Enter value of b :- ");
	scanf("%d",&b);
	
	swap(&a,&b);
}