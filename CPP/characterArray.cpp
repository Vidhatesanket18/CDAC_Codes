#include<iostream>
using namespace std;

int main(){
	
	char* ptr[5]={"Sanket","Bhupesh","Ganesh","Pranay","Sanyog"};
	
	
	for(int i=0; i < 5; i++){
//		
//		cout<<"Value "<<i+1<<" = "<<ptr[i]<<endl;
//		cout<<"Value "<<i<<"  is : "<<*(ptr+i)<<endl;
		cout<<*ptr[i]<<endl;
//		cout<<(ptr+i)<<endl;
	}
	
	return 0;
}
