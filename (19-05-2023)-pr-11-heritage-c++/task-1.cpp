#include<iostream>
using namespace std;

class Mother
{
	public:
		void displey()
		{
			cout<<"Mother call :- My daugther name is shilpa..."<<endl;
		}
};

class Daugther: public Mother
{
	public:
		void displey()
		{
			cout<<"Daugther call :- My mother name is reekhaben..."<<endl;
		}
};

main()
{
	Daugther d1;
	
	d1.displey();
	d1.Mother::displey();
}