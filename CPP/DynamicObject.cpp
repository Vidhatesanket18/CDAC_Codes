#include<iostream>
using namespace std;

class Complex{
	int real,img;
	
	public:
	Complex(int a, int b){
		real = a;
		img = b;
	}
	void show(){
		cout<<real<<" + "<<img<<"i "<<endl;
	}
};

int main(){
	
	Complex* ptr = new Complex(10,2);
	ptr->show();
	
	return 0;
}
