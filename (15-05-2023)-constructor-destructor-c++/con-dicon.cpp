#include<iostream>
#include<string.h>
using namespace std;

class Stu
{
	public:
		int id;
		int age;
		char name[20];
		
	//contructor
	
	Stu() //defult
	{
		cout<<"Defult"<<endl<<endl;
	}
	
	Stu(int i,int a,char n[20]) //peramerers
	{
		id=i;
		age=a;
		strcpy(name,n);
		
		
		cout<<"Id :- "<<id<<endl;
		cout<<"Age :- "<<age<<endl;
		cout<<"Name :- "<<name<<endl<<endl;
	}
	
	Stu(Stu &x) //coppy
	{
		int id=x.id;
		int age=x.age;
		strcpy(name,x.name);
		
		cout<<"call coppy..."<<endl;
		cout<<"Id :- "<<id<<endl;
		cout<<"Age :- "<<age<<endl;
		cout<<"Name :- "<<name<<endl<<endl;
	}
	
	//disconstructor
	~Stu()
	{
		cout<<"thank you caling...."<<endl;
	}
};


main()
{
	Stu s1,s2(101,21,"dvij"),s3(s2),s4=s2;
	
}