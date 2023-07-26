#include<iostream>
using namespace std;

class Base{
	public:
	virtual	void print(){
			
			cout<<"i am Base"<<endl;
		}
};

class Child : public Base
{
	public:
		void print(){
			
			cout<<"i am Child"<<endl;
		}
};

main(){
	Base *p;
	Child c1;
	
	p = &c1;
	p->print();
	
//	c1.print();
}