#include<iostream>
using namespace std;

main(){
	
	int a=10, b=0, x=55, ans;
	char solution[] = "Can't devide by zero";
	float f=20.55;
	
	try{
		if(b==0){
			throw f;
		}else{
			ans=a/b;
			cout<<"Ans = "<<endl;
		}
	}
	
	catch(...){
		cout<<"General Error"<<endl;
	}
}