#include<iostream>
using namespace std;
int fun(int&, int&);
int main(){
	int a=10;
	int b=20;
	cout<<"value of a: "<<a<<"  value of b:  " <<b<<endl
	;
	fun(a,b);
	
	return 0;
}
int fun(int& a,int& b){
	
	int temp=a;
	a=b;
	b=temp;
	cout<<"value of a: "<<a<<"  value of b:  " <<b;
	
}
