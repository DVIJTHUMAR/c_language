#include<iostream>
using namespace std;

class A {
	public:
		int x,y;
		void set(int n1,int n2)
		{
			this->x = n1;
			this->y = n2;
		}
		
		void get()
		{
			cout<<"X = "<<x<<"  Y = "<<y<<endl<<endl;
		}
		
		A operator+(A n)
		{
			A temp;
			
			temp.x = this->x / n.x;
			temp.y = this->y - n.y;
			
			return temp;
		}
		
		A operator-(A n)
		{
			A temp;
			
			temp.x = this->x + n.x;
			temp.y = this->y * n.y;
			
			return temp;
		}
};

main() {
	A a1,a2,a3;
	
	a1.set(20,30);
	a1.get();
	
	a2.set(10,20);
	a2.get();
	
	cout<<"operator+"<<endl;
	a3 = a1 + a2; //a3 = operator+(a2);
	a3.get();
	
	cout<<"operator-"<<endl;
	a3 = a1 - a2; //a3 = operator-(a2);
	a3.get();
	
}