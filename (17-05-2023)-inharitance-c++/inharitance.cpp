#include<iostream>
#include<string.h>
using namespace std;

class A
{
	public:
		int id=10;
		
	void getA()
	{
		cout<<"i'm A id :- "<<id<<endl;
	}
};

class B
{
	public:
		int age=21;
		
	void getB()
	{
		cout<<"i'm B age :- "<<age<<endl;
	}
};

class C : public A,public B
{
	public:
		int sallary=22500;
	void getC()
	{
		cout<<"i'm C sallary :- "<<sallary<<endl;
	}
	
};

main()
{
	C c1;
	
	
	c1.getA();
	c1.getB();
	c1.getC();
}