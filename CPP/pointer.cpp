#include<iostream>
using namespace std;

int main(){
	char* names[4]= {"abc","def","ghi","jkl"};
	for(int i=0; i<4; i++){
//		cout<<*(names+i)<<endl;	
	cout<<*(*(names+i));  // Prints the first character
	
	}
	
}
