#include<iostream>
#include<string.h>
using namespace std;

class Movie
{
	public:
		char name[100];
		int rate;
		
	void setMovie(char n[100],int r)
	{
		rate=r;	
		strcpy(name,n);
		cout<<"Name :- "<<name<<endl;
		cout<<"Rate :- "<<rate<<endl<<endl;
	}
};

class Bollywood : public Movie
{
	public:
	void getB()
	{
		cout<<"Bollywood "<<endl;
	}
};

class Hollywood : public Movie
{
	public:
		void getH()
		{
			cout<<"Hollywood "<<endl;
		}
		
};
		                         
main()
{
   Bollywood b1;
   Hollywood h1;
   
   b1.getB();
   b1.setMovie("sultan",5);
   
   h1.getH();
   h1.setMovie("fast",3);
};