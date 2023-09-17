#include<iostream>
using namespace std;
class Complex{
	int real, img;
	
	public:
	void get(){
		cout<<"Enter the value of real and img: "<<endl;
		cin>>real>>img;	
	}
	void put(){
		cout<<"Complex number = "<<real<<" + "<<img<<"i "<<endl;
	}
	
};

int main(){
	
	int num;
	cout<<"Enter the number of variable you want to create: "<<endl;
	cin>>num;
	
	 Complex* array= new Complex[num];  //Class_name* object_name = new Class_name*[num];---------->syntax
	 
	 for(int i=0; i < num; i++){
	 	array[i].get();
	 }
	 for(int i=0; i < num; i++){
	 	array[i].put();
	 }
	 
	
	return 0;
}
