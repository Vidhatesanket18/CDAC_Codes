#include<iostream>
using namespace std;


class complex{
	int real,img;
	public:
		static int cnt;
		complex(){
				cout<<"Default revoked"<<endl;
				real =5;
				img = 5;
				cnt++;
		}
		complex(int,int){
				cout<<"Default revoked"<<endl;
				real =5;
				img = 5;
				cnt++;
		}
		static int getcnt(){
			return cnt;
		}
};
int complex:: cnt=0;
int main(){
	complex c1;
	complex c2(10,10);
	complex c3(10,23);
	cout<<"No. of object created:  "<<complex::getcnt()<<endl;
	
	cout<<"size of object "<<sizeof(c1)<<endl;
	cout<<"size of c2: "<<sizeof(c2)<<endl;
	cout<<"size of c3:  "<<sizeof(c3)<<endl;
	cout<<complex::cnt;
	return 0;
}
