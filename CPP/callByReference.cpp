#include <iostream>

using namespace std;

// Function that modifies its arguments by reference
void modifyByReference(int &a, int &b) {
    a += 10;
    b *= 2;
}

int main() {
    int num1 = 5;
    int num2 = 7;

    cout << "Before calling modifyByReference:" << endl;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;

    // Call the function by reference
    modifyByReference(num1, num2);

    cout << "After calling modifyByReference:" << endl;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;

    return 0;
}

