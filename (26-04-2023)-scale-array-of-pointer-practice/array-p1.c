#include<stdio.h>
main(){
	
	int a[5] = {6,2,3,9,5};
	int *p[5];
	
	p[0] = &a[0];
	p[1] = &a[1];
	p[2] = &a[2];
	p[3] = &a[3];
	p[4] = &a[4];
	
	printf("%u = %d\n",p[0], *p[0]);
	printf("%u = %d\n",p[1], *p[1]);
	printf("%u = %d\n",p[2], *p[2]);
	printf("%u = %d\n",p[3], *p[3]);
	printf("%u = %d\n",p[4], *p[4]);
	
}