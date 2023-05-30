#include<iostream>
#include<string.h>
using namespace std;

class  Members
{
	public:
		static char company_name[100];
		int id;
		int age;
		char name[20];
		int sallry;
		char gmail[20];
		
		
	
	Members()
	{
		
	}
	
	Members(int i,int a,char n[20],int s,char g[20])
	{
		id=i;
		age=a;
		strcpy(name,n);
		sallry=s;
		strcpy(gmail,g);
		
		cout<<"company name :- "<<company_name<<endl;
		cout<<"Id :- "<<id<<endl
			<<"Age :- "<<age<<endl
			<<"Name :- "<<name<<endl
			<<"Sallry :- "<<sallry<<endl
			<<"Gmail :- "<<gmail<<endl<<endl;
		    
	}
	
	Members(Members &x)
	{
		id=x.id;
		age=x.age;
		strcpy(name,x.name);
		sallry=x.sallry;
		strcpy(gmail,x.gmail);
		
		cout<<"coppy"<<endl<<endl;
		
		cout<<"company name :- "<<company_name<<endl;
		cout<<"Id :- "<<id<<endl
			<<"Age :- "<<age<<endl
			<<"Name :- "<<name<<endl
			<<"Sallry :- "<<sallry<<endl
			<<"Gmail :- "<<gmail<<endl<<endl;
	}
	
};

char Members::company_name[100] = "it-abc";

main()
{
	Members m1(3012,19,"dvij",25000,"dvijpatel222@gmail.com"),m2(m1),m3;
}