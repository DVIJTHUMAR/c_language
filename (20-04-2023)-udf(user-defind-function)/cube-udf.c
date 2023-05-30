#include<stdio.h>

cube(int n)
{
	
	printf("\ncube of no %d * %d * %d = %d ",n,n,n, n*n*n);
	
}



main()
{
	int n;
	
	printf("Enter no of cube :- ");
	scanf("%d",&n);
	
	cube(n); // calling funtion
	
}