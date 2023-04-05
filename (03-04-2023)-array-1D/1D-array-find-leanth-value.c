#include <stdio.h>

main() {
    int arr[] = {0, 1, 2, 3, 4, 5, 6 }; 
    
    int len = sizeof(arr) / sizeof(arr[0]);  
     
	printf("The lenth of Array = %d\n ",len);
}