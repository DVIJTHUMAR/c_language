#include<stdio.h>
main(){
	int n;
	
	printf("Enter length value = ");
	scanf("%d",&n);
	
	int arr[n],r;
	
	printf("\n");
	for(r=0; r<n; r++)
	{
		printf("Enter value of [%d] = ",r);
		scanf("%d",&arr[r]);
	}
	
	printf("\n");
	printf("Negative Elements = ");
	for(r=0; r<n; r++)
	{            
		if(arr[r]<0)
		{
			printf("%d ",arr[r]);
		}
		
	}
}
