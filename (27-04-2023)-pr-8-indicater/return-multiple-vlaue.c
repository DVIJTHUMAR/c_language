#include<stdio.h>
int mul(int *m , int *n){
	
	
	if(*m<*n){
		return *m;
	}else{
		return *n;
	}
}

main(){
	int k,a,b;
	
	printf("Enter A Value = ");
	scanf("%d",&a);
	printf("Enter B Value = ");
	scanf("%d",&b);
	
	k= mul(&a,&b);
	printf("min value = %d",k);
}