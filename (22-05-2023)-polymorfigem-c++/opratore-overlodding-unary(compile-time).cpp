#include<iostream>
using namespace std;

class A
{
	public:
		int x;
		
		void set(int n)
		{
			this->x = n;
		}
		
		void get()
		{
			cout<<"X = "<<x<<endl;
		}
		
		A operator++(int)
		{
			A temp;
			
			temp.x = ++x;
			
			return temp;
		}
		
};

main(){
	A a1,a2;
	
	a1.set(5);
	a1.get();
	
	a2=a1++; // a2 = a1.operator++(int)
	a2.get();
	
	
};