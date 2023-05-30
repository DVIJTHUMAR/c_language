#include<stdio.h>
main(){
	int n,i;
	
	printf("Enter value of length = ");
	scanf("%d",&n);
	
	int array[n],max,min;
	
	for(i=0; i<n; i++)
	{
		printf("\nEnter value of %d = ",i);
		scanf("%d",&array[i]);
	}
	max = array[0];
    min = array[0];

    for (i = 1; i < n; i++)
	{
        if (array[i] > max)
		{
            max = array[i];
        }
        if (array[i] < min)
		{
            min = array[i];
        }
    }

    printf("\nMaximum element = %d\n", max);
    printf("\nMinimum element = %d\n", min);
}