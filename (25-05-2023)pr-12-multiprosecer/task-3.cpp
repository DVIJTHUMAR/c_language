#include<iostream>
using namespace std;

class A{
	
	public:
		
		int x,y;
		
		void set(int n1, int n2){
			
			this->x = n1;
			this->y = n2;
			
		}
		
		void get(){
			
			cout << "x = "<< x << " y = "<< y <<endl;
		}
		
		A operator+(A n){

			A temp;
			
			temp.x = this->x + n.x;
			temp.y = this->y + n.y;                                                    
			
			return temp;  
		}
		
		A operator-(A n){

			A temp;
			
			temp.x = this->x - n.x;
			temp.y = this->y - n.y;                                                    
			
			return temp;  
		}
		
		bool	operator>(A n){
			
			if(this->x > n.x && this-> y>n.y){
				return true;
			}
			else
			{
				return false;
			}
		}
		bool	operator<(A n1){
			
			if(this->x < n1.x && this-> y < n1.y){
				return true;
			}
			else
			{
				return false;
			}
		}
};

main(){
	
	A a1,a2,a3;
	
	a1.set(6,5);
	a1.get();
	
	a2.set(3,2);
	a2.get();
	
	cout<<endl<<" + "<<endl;
	a3 = a1 + a2;
	a3.get();
	
	cout<<endl<<" - "<<endl;
	a3 = a1 - a2;
	a3.get();
	
	cout<<endl<<" if-else "<<endl<<endl;
	
	cout<<"6>3"<<endl;	
	if(a1>a2){
		cout<<" value is true"<<endl;
	}else
	{
		
		cout<<" value is false"<<endl;
	}
	
	cout<<"6<3"<<endl;
	
	if(a1<a2){
		cout<<" value is true"<<endl;
	}else
	{
		
		cout<<" value is false"<<endl;
	}
}
