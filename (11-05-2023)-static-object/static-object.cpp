#include<iostream>
#include<string.h>
using namespace std;

class Employee
{
	public:
		int id;
		static char company_name[100];
		
	public:
		int age;
		int sallary;
		
	void setEmployee(int i,int a,int s)
	{
		id=i;
		age=a;
		sallary=s;
	
	}
	
	getEmployee()
	{
		cout<<"company name :- "<<company_name<<endl;
		cout<<"id :- "<<id<<endl;
		cout<<"age :- "<<age<<endl;
		cout<<"sallary :- "<<sallary<<endl<<endl;
		
	}
};

class Student
{
	public:
		int id;
		static char school_name[100];
		
	public:
		char student_name[50];
		int std;
		int age;
		
	void setStudent(int i,char n[50],int s,int a)
	{
		id=i;
		strcpy(student_name,n);
		std=s;
		age=a;
		

	}
	
	void getStudent()
	{
		cout<<"School name :- "<<school_name<<endl;
		cout<<"student name :- "<<student_name<<endl;
		cout<<"id :- "<<id<<endl;
		cout<<"std :- "<<std<<endl;
		cout<<"age :- "<<age<<endl<<endl;
		
	}
};

char Employee::company_name[100] = "patel";
char Student::school_name[100] = "pd malaviya";

main()
{
	Employee e1,e2,e3;
	Student c1,c2;
	
	e1.setEmployee(1213,21,22500);
	e1.getEmployee();
	
	e2.setEmployee(3222,31,32500);	
	e2.getEmployee();
	
	strcpy(e3.company_name,"thumar");
	e3.setEmployee(4562,19,52300);	
	e3.getEmployee();
	
	c1.setStudent(1232,"dvij",12,18);
	c1.getStudent();
	
	strcpy(c2.school_name,"Sp primary");
	c2.setStudent(2352,"parh",11,17);
	c2.getStudent();
};