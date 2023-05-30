#include<stdio.h>

main(){
	
	int a = 10;
	int b = 20;
	int sum = a + b;
	
	float x = 1.5;
	float y = 1.5;
	float sum2 = x + y;
	
	printf("sum 10 + 20 = %d \n",sum);
	printf("sum 1.5 + 1.5 = %.1f \n",sum2);	
	
	int c = 25;
	int d = 15;
	int sub = c - d;
	
	printf("sub 25 - 15 = %d \n",sub);
	
	int e = 15;
	int f = 5;
	int multi = e * f;
	
	printf("multi 15 * 5 = %d \n", multi);
	
	int g = 50;
	int h = 2;
	int div = g / h;
	
	printf("div 50 / 2 = %d \n", div);
	
	int i = 30;
	int j = 2;
	int moduel = i % j;
	
	printf("moduel = %d",moduel);
}