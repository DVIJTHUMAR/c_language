#include <iostream>
#include <string>
using namespace std;

class Person{
	
	public:
		
    	string name;
    	int age;

    void get_person_info(){
    	
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }
};

class Employee{
	
	public:
    	int empId;
    	string designation;
    
    void get_employee_info(){
    	
        cout << "Enter employee ID: ";
        cin >> empId;
        cout << "Enter designation: ";
        cin >> designation;
    }
};

class EmployeeInfo: public Person, public Employee
{
	public:
    	void display_info(){
    		
        	cout << "Employee Information:" << endl;
        	cout << "Name: " << name << endl;
        	cout << "Age: " << age << " years old" << endl;
        	cout << "Employee ID: " << empId << endl;
        	cout << "Designation: " << designation << endl;
    }
};

main(){
	
    EmployeeInfo emp;

    emp.get_person_info();
    emp.get_employee_info();

    cout << endl;
    emp.display_info();

}
