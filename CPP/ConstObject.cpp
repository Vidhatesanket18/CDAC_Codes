#include<iostream>
using namespace std;

class student{
	int rollno;
	char* name;
	int id;
	
	public:
//		student(){
//			cout<<"Enter number: "<<endl<<"Enter name: "<<endl<<"Enter id: "<<endl;
//			cin>>rollno>>name>>id;
//	
//		}
		void setter(int rollno,int id,char* name){
		
//			cout<<"Enter number: "<<endl<<"Enter ID: "<<endl<<"Enter name: "<<endl;
//			cin>>rollno>>name>>id;
			
			this->name=name;
			this->rollno=rollno;
			this->id=id;
	
		}
		void getter() const{
			cout<<"Number is: "<<rollno<<endl<<"Name is: "<<name<<endl<<"ID is: "<<id<<endl;
		}
		string getValue(){
			return name;
		}
};

int main(){
	
	student s1;
	s1.setter(108,23,"Sanket");
	s1.getter();
	
	
	cout<<s1.getValue();
	return 0;
}
