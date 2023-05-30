#include<iostream>
#include<string.h>
using namespace std;

class Employee
{
	private:
		int id;
		
	public:
		char employee_name[100];
		char role[100];
		int sallary;
		char experience[50];
		char address[100];
		char email[100];
		int contact;
		
	//setter-method
	void setEmployee(char n[100],int i,char r[100],int s,char ex[50],char a[100],char e[100],int c)
	{
		strcpy(employee_name,n);
		id = i;
		strcpy(role,r);
		sallary = s;
		strcpy(experience,ex);
		strcpy(address,a);
		strcpy(email,e);
		contact = c;
		
	}
	
	//getter-method
	 getEmployee()
	 {
	 	cout<<"Employee name :- "<<employee_name<<endl
	 		<<"Id :- "<<id<<endl
	 		<<"Role :- "<<role<<endl
	 		<<"Sallary :- "<<sallary<<endl
	 		<<"Experience :- "<<experience<<endl
			<<"Address:- "<<address<<endl
			<<"Email :- "<<email<<endl
			<<"Contact :- "<<contact<<endl<<endl;
	 }
};

main()
{
	Employee e1,e2,e3,e4,e5;
	
	e1.setEmployee("dvij",210,"full-stack-dev.",29900,"1.5 year","thakor-dwar-socity2,surat","dvijpatel222@gmail.com",873581530);
	e2.setEmployee("parth",332,"backen-dev.",35000,"1 year","adajan,surat","parth23@gmail.com",632581530);
	e3.setEmployee("gautam",225,"frontend-dev.",45000,"5 year","nikol,ahemdabad","gautam45@gmail.com",743581530);
	e4.setEmployee("vishal",552,"web-design-dev.",25000,"2 year","mavdi,rajkot","vishal88@gmail.com",358153066);
	e5.setEmployee("abhay",123,"ios-dev.",15000,"fresher","mota varachha,surat","abhay89@gmail.com",358153055);
	
	e1.getEmployee();
	e2.getEmployee();
	e3.getEmployee();
	e4.getEmployee();
	e5.getEmployee();
}