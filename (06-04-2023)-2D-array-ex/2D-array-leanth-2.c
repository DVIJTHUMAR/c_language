#include <stdio.h>

main()
{
	int arr[][5] = { {1, 2, 3,4,5}, {4,5,5, 5, 6}, {7, 8, 9,5,6},{1,2,3,5,6} };
    
    int rows = sizeof(arr) / sizeof(arr[0]);    
    int cols = sizeof(arr[0]) / sizeof(int);   
    
    printf("rows: %d\n", rows);
    printf("cols: %d\n", cols);

}