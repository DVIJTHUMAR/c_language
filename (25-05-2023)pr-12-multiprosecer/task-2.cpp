#include <iostream>
using namespace std;

class Shape {
	public:
    	virtual float getArea() = 0;
};

class Circle:public Shape
{
	public:
		float radius;
		
		void seta(float r){
			this->radius = r;
		}
	    float getArea() {
    	    return 3.14159 * radius * radius;
    	}
	};

class Triangle:public Shape
{
	public:
		float base;
    	float height;
    	
		void seta(float b , float h){
			this->base = b;
			this->height = h;
		}
    	float getArea() {
        	return 0.5 * base * height;
  	  }
	};

main() {
  
    Circle c;
    Triangle t; 
    
    c.seta(5);
    t.seta(4,6);
    
    cout<<"Area of Circle = "<<c.getArea()<<endl;
 	cout<<"Area of Triangle = " <<t.getArea()<<endl;

}