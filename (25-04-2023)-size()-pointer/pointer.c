#include<stdio.h>

main()
{
	int k=5, u=3;
	int *ans,*ans1;
		
	ans=&k;
	ans1=&u;
	
	printf("%u\n",ans); // location
	printf("%d\n",*ans); // value of pointer
	
	printf("%p\n",ans); // location
	printf("%d\n",*ans); // value of pointer
	
	printf("%x\n",ans); // location
	printf("%d\n\n",*ans); // value of pointer
	
	printf("%u\n",ans1); // location
	printf("%d\n",*ans1); // value of pointer
	
	printf("%p\n",ans1); // location
	printf("%d\n",*ans1); // value of pointer
	
	printf("%x\n",ans1); // location
	printf("%d\n",*ans1); // value of pointer
}