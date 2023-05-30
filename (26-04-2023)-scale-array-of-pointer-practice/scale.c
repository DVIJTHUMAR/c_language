#include<stdio.h>

main()
{
	int arr[5]={7,2,3,4,5};
	int *p,i;
	
	p=&arr;
	
//	printf("%u = %d \n",p,*p);
//	printf("%u = %d \n",(p+1),*(p+1));
//	printf("%u = %d \n",(p+2),*(p+2));
//	printf("%u = %d \n",(p+3),*(p+3));
//	printf("%u = %d \n",(p+4),*(p+4));

	for(i=0; i<5; i++)
	{
		printf("%u = %d",p+i,*(p+i));
		printf("\n");
	}
	
	
}