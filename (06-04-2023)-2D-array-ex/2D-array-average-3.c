#include<stdio.h>
main()
{
	int row,col;
	
	printf("Enter row = ");
	scanf("%d",&row);
	
	printf("Enter col = ");
	scanf("%d",&col);
	
	int arr[row][col],row1,col1;
	float sum,total=0;
	
	for(row1=0; row1<row; row1++)
	{
		for(col1=0;col1<col;col1++)
		{
			printf("Enter value in [%d][%d] = ",row1,col1);
			scanf("%d",&arr[row1][col1]);
		}
		printf("\n");
	}
	for(row1=0; row1<row; row1++)
	{
		for(col1=0;col1<col;col1++)
		{
			total += arr[row1][col1];
		}
		
	}
	printf("\n");
	sum=total / (row*col);
	
	printf("Total = %0.2f \n",total);
	printf("Average of 2d Array = %0.2f ",sum);
}
