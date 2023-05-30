#include <iostream>
#include <string>
using namespace std;

class Animal{
	
	public:
    	string name;
    	int age;
		
    void set_value(string n, int a) {
        name = n;
        age = a;
    }
};

class Zebra: public Animal
{
	public:
		
		void display_info(){
    	
        cout << "Zebra Info:" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << " years old" << endl;
        cout << "Place of Origin: Africa" << endl;
    }
};

class Dolphin: public Animal
{
	public:
		
    	void display_info(){
    		
        cout << "Dolphin Info:" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << " years old" << endl;
        cout << "Place of Origin: Oceans" << endl;
    }
};

main(){
	
    Zebra zebra;
    Dolphin dolphin;

    zebra.set_value("Stripes", 5);
    dolphin.set_value("Flipper", 10);

    zebra.display_info();
    cout << endl;
    dolphin.display_info();
}