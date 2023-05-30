#include<stdio.h>
main(){
	int n, x;
	
	printf("Enter row value = ");
	scanf("%d",&n);
	
	printf("Enter col value = ");
	scanf("%d",&x);
	
	int arr[n][x], i, j, max;
	
	printf("\n");
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("Enter value of [%d][%d] = ",i,j);
			scanf("%d",&arr[i][j]);
		}	
		printf("\n");
	}
	
	printf("\n");
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%d\t",arr[i][j]);
		}	
		printf("\n");
	}
	max = arr[0][0];
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
			if(max<arr[i][j])
		{
			max=arr[i][j];
		}
		
	}
	printf("\n");
	printf("Largest Number = %d\n",max);
	
}
