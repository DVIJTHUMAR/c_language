#include<iostream>
using namespace std;

class India
{
	public:
		void Eat()
		{
			cout<<"Indian people eat roti-sabji.."<<endl;
		}
};

class Usa : public India
{
	public:
		void Eat()
		{
			cout<<"Usa people eat Fast-food.."<<endl;
		}
};

main()
{
	Usa parth;
	
	parth.Eat();
	parth.India::Eat();
};