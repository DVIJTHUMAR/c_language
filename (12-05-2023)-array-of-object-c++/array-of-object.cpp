#include<iostream>
#include<string.h>
using namespace std;

class Student
{
	public:
		int gr_id;
		char name[100];
		char course[100];
		int year_of_birth;
	
	static int c_year;
	
	void setStudent()
	{
		cout<<"Enter Gr_Id :- ";
		cin>>this->gr_id;
		cout<<"Enter name :- ";
		cin>>this->name;
		cout<<"Enter Course :- ";
		cin>>this->course;
		cout<<"Enter year_of_birth :- ";
		cin>>this->year_of_birth;
		
	}
	
	void getStudent()
	{
		cout<<endl<<"Gr_Id :- "<<gr_id<<endl;
		cout<<"Name :- "<<name<<endl;
		cout<<"Course :- "<<course<<endl;
		cout<<"year_of_birth :- "<<year_of_birth<<endl;
		cout<<"c_year :- "<<c_year<<endl<<endl;
	}
		
};

int Student::c_year = 2023;

main()
{
	int x;
	
	cout<<"Enter No. of Student :- ";
	cin>>x;
	
	cout<<endl;
	
	Student std[15];
	int i,n;
	
	cout<<"Enter No. of Student Data :- ";
	cin>>n;
	
	cout<<endl;
	
	for(i=0; i<n; i++)
	{
		cout<<"Student Data :- "<<i+1<<endl<<endl;
		std[i].setStudent();
		std[i].getStudent();
	}
}