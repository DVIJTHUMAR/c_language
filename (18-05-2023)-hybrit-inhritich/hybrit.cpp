#include<iostream>
using namespace std;

class A
{
	public:
		
		void get()
		{
			cout<<"i am A "<<endl;
		}
		
};

class B: public A
{
	public:
		
		void get()
		{
			cout<<"i am B "<<endl;
		}
		
};


class C: public A
{
	public:
		
		void getC()
		{
			cout<<"i am C "<<endl;
		}
		
};


class D: public B, public C
{
	public:
		
		void getD()
		{
			cout<<"i am D "<<endl;
		}
		
};


main()
{
	D d1;
	
	d1.C::get();
	d1.b::get();
	d1.getC();
	d1.getD();
	
}