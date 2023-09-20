#include <iostream>

using namespace std;

int main() {
    // If statement
    int x = 10;
    if (x > 5) {
        cout << "x is greater than 5." << endl;
    } else {
        cout << "x is not greater than 5." << endl;
    }

    // Switch statement
    int day = 3;
    switch (day) {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        default:
            cout << "Unknown day" << endl;
    }

    // While loop
    int i = 1;
    while (i <= 5) {
        cout << i << " ";
        i++;
    }
    cout << endl;

    // For loop
    for (int j = 1; j <= 5; j++) {
        cout << j << " ";
    }
    cout << endl;

    // Do-while loop
    int k = 1;
    do {
        cout << k << " ";
        k++;
    } while (k <= 5);
    cout << endl;

    return 0;
}

