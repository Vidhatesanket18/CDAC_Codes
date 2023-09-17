#include<iostream>
using namespace std;

class Complex{
	
	int a;
	public:
		
		Complex(){	
			a=5;
		}
		int add(int a){
			
			this->a=this->a+a;
			return this->a;
		}
};

int main(){
	
	Complex c1;
	
	cout<<"Addition of constant and object: "<<c1.add(10);
}
