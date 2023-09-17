#include <iostream>
using namespace std;

int main() {
    int rows;

    cout << "Enter the number of rows for the pyramid: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++) {  //2
        for (int j = 1; j <= rows - i; j++) {  
        
        
            cout << " ";
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
        }
        cout << endl;
    }
    for(int i=5; i>=1;i--){
    	for(int j=5; j>=rows-i;j--){
    		cout<<" ";
		}
		for(int k=5;k>=2*i-1;k--){
			cout<<"*";
		}
		cout<<endl;
	}


 
    return 0;
}

