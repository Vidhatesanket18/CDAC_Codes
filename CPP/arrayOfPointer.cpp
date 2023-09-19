#include<iostream>
using namespace std;

int main(){
	int size;
	cout<<"Enter the size: "<<endl;
	cin>>size;
	int ptr[size];
	int* ptr1[size];
	
	
	for(int i=0; i < size; i++){
		cout<<"Enter the value : "<<i<<endl;
		cin>>ptr[i];
	}
	
	for(int i=0; i < size; i++){
		
		ptr1[i]=&ptr[i];
		
	}
	
	for(int i=0; i < size; i++){
		
		cout<<"Value at index "<<i<<" = "<<*ptr1[i]<<endl;
		
	}
	
	
	return 0;
}
