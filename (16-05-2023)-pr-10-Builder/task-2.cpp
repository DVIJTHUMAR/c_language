#include<iostream>
#include<string.h>
using namespace std;

class  Dell
{
	public:
		int id;
		int age;
		char name[20];
		int prize;
		
	Dell()
	{
		
	}
	
	Dell(int i,int a,char n[20],int p)
	{
		id=i;
		age=a;
		strcpy(name,n);
		prize=p;
		
		cout<<"Id :- "<<id<<endl
			<<"Age :- "<<age<<endl
			<<"Name :- "<<name<<endl
			<<"Prize :- "<<prize<<endl<<endl;
	}
};


main()
{
	Dell d1(222,25,"dell-i7",29890),d2;
}