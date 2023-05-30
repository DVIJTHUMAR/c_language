#include <stdio.h>
#include <string.h>

main(){
    char n[100];
    int i,j=1,k;

    printf("Enter a string = ");
    gets(n);

	puts(n);
	
	
	for(i=0;n[i]!=NULL;i++){
		if(n[i]==' '){
			j++;
		}else{
			k++;
		}	
	}
	
	printf("Total number of words = %d",j);
}
