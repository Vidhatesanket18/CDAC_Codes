#include<iostream>
using namespace std;
class Student{
	int rollno;
	 char* name;
	double fee;
	
	public:
//		Student(int rollno,int name,int fee){
//			cout<<"Enter rollno: "<<endl;
//			cin>>rollno;
//			cout<<"Enter name: "<<endl;
//			cin>>name;
//			cout<<"Enter fees: "<<endl;
//			cin>>fee;
//		}
		Student(int rollno,char* name,double fee){     //---> if we create object like this Student s1---> It shows an error.
				this->rollno=rollno;
				this->name=name;
				this->fee=fee;
		}
		void display(){
			cout<<"Roll no: "<<rollno<<endl;
			cout<<"Name is: "<<name<<endl;
			cout<<"Fees is: "<<fee<<endl;
		}
};

int main(){
	
//	SStudent s1;
//	s1.display();
	
	Student s2(23,"Sanket",23.3);
	s2.display();
	
	
	
	
	
	return 0;
}
