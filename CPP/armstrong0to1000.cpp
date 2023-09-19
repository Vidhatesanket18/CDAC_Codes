#include <iostream>
#include <cmath>

using namespace std;

// Function to check if a number is an Armstrong number
bool isArmstrong(int num) {
    int originalNum = num;
    int numberOfDigits = 0;
    int sum = 0;

    while (num > 0) {
        num /= 10;
        numberOfDigits++;
    }

    num = originalNum;

    while (num > 0) {
        int digit = num % 10;
        sum += pow(digit, numberOfDigits);
        num /= 10;
    }

    return sum == originalNum;
}

int main() {
    int count = 0;

    for (int num = 0; num <= 999; num++) {
        if (isArmstrong(num)) {
            cout << num << endl;
            count++;
        }
    }

    cout << "Total Armstrong numbers between 0 and 999: " << count << endl;

    return 0;
}

