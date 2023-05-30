#include<stdio.h>
main(){
	int n;
	
	printf("Enter length value = ");
	scanf("%d",&n);
	
	int arr[n], x, sum=0;
	
	printf("\n");
	for(x=0; x<n; x++)
	{
		printf("Enter value of [%d] :- ",x);
		scanf("%d",&arr[x]);
	}
	
	printf("\n");
	
	for(x=0; x<n; x++)
	{            
		sum+=arr[x];
	}
	printf("Sum of All Elements :- %d ",sum);
}
