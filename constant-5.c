#include<stdio.h>

main(){

//area of interest:- p*(1+r*t)
	int p;
	int r;
	int t;
	int total;
	
	printf("add value p :-",p);
	scanf("%d",&p);
	
	printf("add value r :-",r);
	scanf("%d",&r);
	
	printf("add value t :-",t);
	scanf("%d",&t);
	
	total= p*(1+r*t);
	printf("total of intrest =%d",total);
}
