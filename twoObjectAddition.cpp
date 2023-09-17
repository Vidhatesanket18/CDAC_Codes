#include<iostream>
using namespace std;

class temp{
	int a;
	
	public:
		
	void get(){
		cout<<"Enter value: "<<endl;
		cin>>a;
	}
	
	temp add(temp& b){ 
		
		temp obj3;
		
		obj3.a=this->a + b.a;
		
		return obj3;
	}
	void show(){
		cout<<" result: "<<a;
	}
	
	
};

int main(){
	temp obj1,obj2;
	
	obj1.get();
	obj2.get();
	
	temp obj3=obj1.add(obj2);
	
	obj3.show();
	
	
	return 0;
}
