#include<stdio.h>

main(){
	char n[100] ;
	int i;
	
	printf("Enter the string = ");
 	gets(n);
 	puts(n);
 	
 	for(i=0; n[i]!=NULL; i++){
 		if(n[i]==' '){
 			printf("%c",n[i]=-32);
		 }else{
		 	printf("%c",n[i]);
		}
	}
}