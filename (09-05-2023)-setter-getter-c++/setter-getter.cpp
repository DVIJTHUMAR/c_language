#include<iostream>
#include<string.h>
using namespace std;

class Student
{
	private:
		int gr_id;
		
	public:
		char student_name[100];
		int age;
		int std;
		float pr;  
		
	//setter-method
	void setStudent(char n[100],int a,int g,int s,float p)
	{
		strcpy(student_name,n);
		age = a;
		std = s;
		gr_id = g;
		pr = p;
	}
	
	//getter-method
	 getStudent()
	 {
	 	cout<<"Student name :- "<<student_name<<endl
	 		<<"Age :- "<<age<<endl
	 		<<"Gr_id :- "<<gr_id<<endl
	 		<<"Std :- "<<std<<endl
	 		<<"Percentage :- "<<pr<<endl<<endl;
	 }
	
};

main()
{
	Student s1,s2,s3,s4,s5,s6,s7,s8,s9,s10;
	
	s1.setStudent("dvij",22,3191,12,78.99);
	s2.setStudent("parth",21,3192,10,68.45);
	s3.setStudent("raj",22,3021,12,88);
	s4.setStudent("abhay",21,3822,12,82);
	s5.setStudent("ajay",22,2255,9,62);
	s6.setStudent("udit",19,2154,10,52.88);
	s7.setStudent("vishal",20,1235,7,54.65);
	s8.setStudent("rohan",25,5254,8,98.99);
	s9.setStudent("dixit",22,6532,12,65.33);
	s10.setStudent("harshil",20,5241,10,70.22);
	
	s1.getStudent();
	s2.getStudent();
	s3.getStudent();
	s4.getStudent();
	s5.getStudent();
	s6.getStudent();
	s7.getStudent();
	s8.getStudent();
	s9.getStudent();
	s10.getStudent();
};