#include<stdio.h>
main(){
	int n,i;
	
	printf("Enter value of length = ");
	scanf("%d",&n);
	
	int array[n],max,min;
	
	for(i=0;i<n;i++){
		printf("\nEnter value of %i =",i);
		scanf("%d",&array[i]);
	}
	max = array[0];
    min = array[0];

    for (i = 1; i < n; i++) {
        if (array[i] > max) {
            max = array[i];


        }
        if (array[i] < min) {
            min = array[i];
        }
    }
    printf("\nElements of an array in Descending Order = ");
	for(max=max;max>=min;max-=1){
		for(i=0;i<n;i++){
			if(max==array[i]){
				printf("%d ",max);
			}
		}	
	}
	printf("\n\nElements of an array in Ascending Order = ");
	for(min=min;min>=max;min+=1){
		for(i=0;i<n;i++){
			if(min==array[i]){
				printf("%d ",min);
			}
		}	
	}
	

    
}