#include<iostream>
using namespace std;

class Shap{
	public:
		virtual void Draw()=0;
};

class Tringle : public Shap
{
	public:
		void Draw(){
			cout<<"Tringle"<<endl;
		}
};

class Circle : public Shap
{
	public:
		void Draw(){
			cout<<"Circle"<<endl;
		}
};

main(){
	Tringle t1;
	Circle c1;
	
	t1.Draw();
	c1.Draw();
	
}