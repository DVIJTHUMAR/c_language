#include <stdio.h>  
  
main()  
{  
     
    int i,n;
	  
       printf("Enter lenth vlaue :- ");
       scanf("%d",&n);	
       
	int array[n];
  
    for(i=0; i<n; i++)  
    {  
	    printf("\nValue - %d : ",i);
        scanf("%d", &array[i]);  
    }  
  
    printf("\nValue in array are: ");
    
    for(i=0; i<n; i++)  
    {  
        printf("%d  ", array[i]);  
    } 
    printf("\n");	
}

