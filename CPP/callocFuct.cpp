#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
	int n;
	cout<<"Enter number of elements you want to store : "<<endl;
	cin>>n;
	int* name;
	int sum=0;
	
//	data_type*  pointer_name = void* calloc(size,sizeof(int)); --------> syntax
	
	int* name = (int*)calloc(n,sizeof(int));
	
	for(int i=0; i < n; i++){
		cout<<"Enter the element number: "<<endl;
		cin>>*(name+i);
		sum= sum+name[i];
	}
	cout<<"Avg: "<<sum/n;
	
	
	return 0;
}
