#include<stdio.h>

int fact(n){
	
	if(n<1){
		return 1;
	}else{
		return n*fact(n-1);
	}
	
}

void main(){
	int n;
	printf("Enter value no :- ");
	scanf("%d",&n);
	
	int result;
	
	result=fact(n);
	printf("Factorial no. Answer :- %d",result);
	
}