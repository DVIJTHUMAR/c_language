#include<iostream>
using namespace std;

class Time{
	
	public:
		
		int hr,min,sec;
		
		void set(int h,int m,int s)
			{
				this->hr = h;
				this->min = m;
				this->sec = s;
			}
		
		void get()
			{
				cout<<hr<<":"<<min<<":"<<sec<<endl;
			}
			
		bool operator==(Time n)
			{
				if(this->hr==n.hr && this->min==n.min && this->sec==n.sec){
					return true;
				}else{
					return false;
				}
			}
	
};

main(){
	
	Time t1,t2;
	
	t1.set(5,10,40);
	t1.get();
	
	t2.set(5,10,40);
	t2.get();
	
	if(t1==t2){
		
		cout<<endl<<"Both time are same."<<endl;
		
	}else{
		
		cout<<"Both time are deffrent."<<endl;
	}
};