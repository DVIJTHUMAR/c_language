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
//	catch(int n){
//		cout<<"Int Erroer "<<endl;
//	}
//	catch(char n[]){
//		cout<<"String Solution Erroer "<<endl;
//	}
//	catch(float n){
//		cout<<"Float Erroer "<<endl;
//	}
	
	catch(...){
		cout<<"Gernal Erroer"<<endl;
	}
}