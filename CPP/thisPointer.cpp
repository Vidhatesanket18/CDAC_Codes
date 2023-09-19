#include<iostream>
using namespace std;

class test{
	int a,b;
	public:
		int show(){
			a=10;
			b=20;
			
			cout<<this<<endl;
			cout<<sizeof(this);
			
		}
};
int main(){
	test t;
	cout<<t.show();
	
	return 0;
}
