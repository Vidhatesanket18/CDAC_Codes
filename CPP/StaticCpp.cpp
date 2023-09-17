#include<iostream>
using namespace std;


int main(){
//	char* name[20] = {"Sanket","Bhupesh","Ganesh","Sanyog","Pranay"};
	char a= 'A';
	char* b= &a;
	char** c= &b;
	
	cout<<"using **c: "<<**c<<endl;
	cout<<"size of **c: "<<sizeof(**c)<<endl;
	cout<<"using *b: " <<*b<<endl;
	cout<<"size of *b: "<<sizeof(*b)<<endl;
	cout<<"size of b: "<<sizeof(b)<<endl;
	cout<<"size of a: "<<sizeof(&a)<<endl;
	
	cout<<&a<<"  "<<&b;
	
	
	return 0;
}
