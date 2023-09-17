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
		cnt++;
	}
		Complex(int a,int b){
		real=a;
		img=b;
		cnt++;
	}
	static int getcnt(){
		return cnt;
	}
	
};
 int Complex:: cnt=0;// Default value is zero

int main(){
	 
	Complex c1,c2,c3;
	Complex(12,56);
	cout<<Complex::getcnt()<<endl;
	cout<<Complex::getcnt();

	return 0;
}











