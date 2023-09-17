#include<iostream>
using namespace std;
class Complex{
	private:
	int real,img;
	    
    public:
    	static int cnt;
    	
	Complex(){
		real=5;
		img=13;
		cout<<"Default constructor revoked: "<<endl;
		cnt++;
	}
		Complex(int a,int b){
		real=a;
		img=b;
		cout<<"Parameterized constructor revoked: "<<endl;
		cnt++;
	}
	 static int getcnt(){
		return cnt;
	}
	
};
 int Complex:: cnt;// Default value is zero

int main(){
	 
	Complex c1,c2,c3;
	Complex c4(12,56);
	cout<<Complex::getcnt()<<endl;
	cout<<Complex::getcnt();

	return 0;
}











