#include <stdio.h>

main(){
	
	int base_salary, hra=10 , da=5 , ta=8, gross_salary ;
	
	printf("Enter Base-salary :- ");
	scanf("%d",&base_salary);
	
	hra=base_salary * 10 / 100;
	da=base_salary * 5 / 100;
	ta=base_salary * 8 / 100;
	
	gross_salary=base_salary+hra+da+ta;
	
	printf("GROSS_SALARY %d",gross_salary);
	
}