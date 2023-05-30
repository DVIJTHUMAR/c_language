#include<stdio.h>

main()
{
	int col, row;

	printf("Enter value of row :- ");
	scanf("%d",&row);
	
	printf("Enter value of col :- ");
	scanf("%d",&col);
	
	int arr[row][col], r1, c1,sum=0;
	
	for(r1=0; r1<row; r1++)
	{
		for(c1=0; c1<col; c1++)
		{
			printf("Enter value in [%d][%d] = ",r1,c1);
			scanf("%d",&arr[r1][c1]);
		}
		printf("\n");
	}
	for(r1=0; r1<row; r1++)
	{
		for(c1=0; c1<col; c1++)
		{
			printf("%d\t",arr[r1][c1]);
		}
		printf("\n");
	}
	for(r1=0; r1<row; r1++)
	{
		for(c1=0; c1<col; c1++)
		{
			if(r1 == c1)
			{
				sum += arr[r1][c1];
				
			}
		}
	}
		printf("\n%d",sum);
}