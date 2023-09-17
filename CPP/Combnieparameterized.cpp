#include<iostream>
#include<string>

using namespace std;
class stud{
	
	int id;
	string name;
	int rno;
	public:
		//Parameterized constructor and this keyword
	stud(int id,const string& name, int rno){
		this->name=name;
		this->id = id;
		this->rno=rno;
	}
	stud() {
        id = 0;
        name = "";
        rno = 0;
    }

	void display(){
		cout<<"id is: "<<id<<"  Name is: "<<name<<"  roll number is: "<<rno<<endl;
//		cout<<"id is: "<<this->id<<"  Name is: "<<this->name<<"  roll number is: "<<this->rno<<endl;
		
	}
	
	//declaring function which having same variable name ast as that of the variable which present in the class
	// name of variable in the function == name of variables in the class
	void show(int id, const string& name, int rno){
		cout<<"The function which takes the arguments having same name as that of the class: "<<endl;
		this->name = name;
		(*this).rno = rno;
		(*this).id = id;
		cout<<"Name is : "<<name<<" & roll number is: "<<rno<<endl;
	}
	
};


int main(){
	
	stud s1(123,"sanket",106);
	s1.display();
	cout<<"The address of the object s1 is: "<<&s1<<endl;
	
	stud s2;
	s2.show(420,"vidhate",69);
	s2.display();	
	
	return 0;
	
}
