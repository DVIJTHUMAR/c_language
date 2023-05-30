#include<stdio.h>


div(int n){

	int a, b, sum, sub, mul, div;
	int choice;

	printf("enter a value :-");
	scanf("%d",&a);

	printf("\nenter b value :-");
	scanf("%d",&b);

	printf("\nsum of 1, sub of 2, mul of 3, div of 4 :-");
	scanf("%d",&choice);

	switch(choice){

	case 1:
		
		
		sum = a + b;
		printf("\nsum of %d and %d = %d",a,b,sum);
		break;

	case 2:
		sub = a - b;
		printf("\nsub of %d and %d = %d",a,b,sub);
		break;

	case 3:
		mul = a * b; 
		printf("\nmul of %d and %d = %d",a,b,mul);
		break;

	case 4:
		div = a / b;
		printf("\ndiv of %d and %d = %d",a,b,div);
		break;

	default:
		printf("\nplz enter valid number...");
		break;
	}
}

int main()
{
	int num;
	div(num);
	
	
}