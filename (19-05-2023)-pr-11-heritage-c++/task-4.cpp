#include <iostream>
using namespace std;

class Number{
	
	public:
    	int num;

    void get_number(){
    	
        cout << "Enter a number: ";
        cin >> num;
    }
};

class Square: public Number
{
	public:
		
    void calculate_square(){
    	
        int square = num * num;
        
        cout << "Square of " << num << " is: " << square << endl<<endl;
    }
};

class Cube: public Number 
{
	public:
		
    void calculate_cube(){
    	
        int cube = num * num * num;
        
        cout<< "Cube of " << num << " is: " << cube << endl;
    }
};

main(){
	
    Square s1;
    Cube c1;

    s1.get_number();
    s1.calculate_square();

    c1.get_number();
    c1.calculate_cube();

}
