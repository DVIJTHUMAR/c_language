#include<stdio.h>

main(){
	
// count number

	int chr=0;
	long long n;
	
	printf("Enter user value :- ");
	scanf("%lld",&n);
	
	while(n != 0){
		n /= 10;
		chr++;	
	}
	printf("%d",chr);
}