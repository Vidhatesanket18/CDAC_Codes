#include<iostream>
#include<string.h>
using namespace std;


class string1{
	int len;
	char* ptr;
	
	public:
		string1(char*);
		string1();
		string1(int ,char );
		
		void show();
	
};

string1::string1(){
	int num;
	cout<<"Enter the length of string: "<<endl;
	cin>>num;
	
	len=num;
	
	char ch[num+1];
	ptr=new char[num+1];
	
	cout<<"Enter the string: "<<endl;
	cin>>ch;
	strcpy(ptr,ch);
	
}




string1::string1(char* ch){
	
	int x= strlen(ch);
	cout<<"Length of string is: "<<x<<endl;
	cout<<"String is: "<<ch<<endl;
}

string1::string1(int len,char ch){
	
	
	this->len=len;
	int i=0;
	
	ptr=new char[this->len+1];
	
	
	for(i=0; i < this->len; i++){
		ptr[i]=ch;
		cout<<ptr[i];
	}
	ptr[i]='\n';
	
	
}




void string1::show(){
	cout<<"length is: "<<len<<endl;
	cout<<"String is: "<<ptr<<endl;
}

int main(){
	string1 s1("CDAC");
	string1 s2;
	s2.show();
	
	string1 s3(50,'c');
	
	
	return 0;
}
