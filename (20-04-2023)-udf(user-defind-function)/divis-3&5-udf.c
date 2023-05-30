#include<stdio.h>

divis(int n)
{
	
	if(n % 3 == 0 && n % 5 == 0)
	{
		printf("\n nunmber is divisible by 3 & 5");
	}else
		{
			printf("\n nunmber is not divisible by 3 & 5");
		}
	
}

main()
{
	int n;
	
	printf("Enter divis no :- ");
	scanf("%d",&n);
	
	divis(n); // calling funtion
	
}