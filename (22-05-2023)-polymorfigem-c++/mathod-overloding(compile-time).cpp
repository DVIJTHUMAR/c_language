#include<iostream>
using namespace std;

// mathod overloading

class Bus
{
	public:
		
		void alakh()
		{
			cout<<"Bus is empty and stop at bus-parking."<<endl;
		}
		
		void alakh(int n)
		{
			cout<<"Bus is with "<<n<<" pessangers, and bus is on the way surat."<<endl;
		}
		
		void alakh(float n)
		{
			cout<<"Bus is with "<<n<<" lagage"<<endl;
		}
		
		void alakh(float f,int n)
		{
			cout<<"Bus hold time is "<<f<<" total hold on jorney "<<n<<endl;
		}
};


main()
{
	Bus b1;
	
	b1.alakh();
	b1.alakh(26);
	b1.alakh(50.20f);
	b1.alakh(11.45f,3);
}