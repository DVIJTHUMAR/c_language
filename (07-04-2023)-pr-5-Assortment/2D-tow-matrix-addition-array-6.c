#include<stdio.h>
main(){
	int n, x;
	
	printf("Enter row value = ");
	scanf("%d",&n);
	
	printf("Enter col value = ");
	scanf("%d",&x);
	
	
	int arr1[n][x], i, j, arr2[n][x], sum;
	
	printf("\n");
	printf("Fill First Matric value\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter value of [%d][%d] = ",i,j);
			scanf("%d",&arr1[i][j]);
		}	
		printf("\n");
	}
	printf("\n");
	printf("Fill Second Matric value\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter value of [%d][%d] = ",i,j);
			scanf("%d",&arr2[i][j]);
		}	
		printf("\n");
	}
	
	printf("\n");
	printf("First Matric\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",arr1[i][j]);
		}	
		printf("\n");
	}
	printf("\n");
	printf("Second Matric \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",arr2[i][j]);
		}	
		printf("\n");
	}
	printf("\n");
	printf("Addition of Two Matrices = \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			sum=arr1[i][j]+arr2[i][j];
			printf("%d\t",sum);
		}	
		printf("\n");
	}	
}