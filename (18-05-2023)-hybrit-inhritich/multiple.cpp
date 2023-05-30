#include<iostream>
using namespace std;

class A
{
	public:
		
		void get()
		{
			cout<<"Hello i am A "<<endl;
		}
};

class B: public A
{
	public:
		
		void get()
		{
			cout<<"Hello i am B "<<endl;
		}
};

class C: public B
{
	public:
		
		void getC()
		{
			cout<<"Hello i am C "<<endl;
		}
};

main()
{
	C c1;
	
	c1.get();
	c1.A::get();
	c1.getC();
}