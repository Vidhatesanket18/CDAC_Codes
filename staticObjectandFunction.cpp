#include <iostream>
using namespace std;

class MyClass {
	
public:
    static void staticFunction() {
        cout << "static member function." <<endl;
    }
    void func(){
    	cout<<"non-static member function"<<endl;
	}
};

int main() {
    
    static MyClass staticObject;
    

    staticObject.staticFunction();
    staticObject.func();

    return 0;
}

