#include<iostream>
#include<cstring>
using namespace std;

class string1{
	int len;
	char* name;
	public:
		string1(){
			
		}
		string1 fun(string1&);
		string1(char*);
		void display();
};


string1 string1::fun(string1& obj){
	string1 st;
	st.len=strlen(obj.name);
	name = new char[len+1];

	strcpy(obj.name,st.name);
 	return st;
	
}
string1::string1(char* str){
	name = str;
	len=strlen(str);
}
void string1::display(){
	cout<<"length: "<<len<<endl;;
	cout<<"Name: "<<name;
}
int main(){
	
	
	string1 s1("sanket");

	string1 s2(s1);
	s2.display();
	s1.display();
	
}
