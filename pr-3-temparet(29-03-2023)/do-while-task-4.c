#include<stdio.h>
main(){
	
	int n, sum, first, last, s=0;
	
	printf("Enter any number to find first and last digit sum N :- ");
	scanf("%d",&n);
	
	first = n;
	
	while(first>=10){
		first= first / 10;
		s=first;
	}
	last = n % 10;
	sum=s+last;
	
	printf("sum of first and last digit = %d",sum);
}