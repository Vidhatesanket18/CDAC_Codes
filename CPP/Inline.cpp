#include <iostream>

using namespace std;

// Inline function declaration
inline int add(int a, int b) {
    return a + b;
}

int main() {
    int x = 5;
    int y = 7;

    // Call the inline function
    int result = add(x, y);

    cout << "Result of addition: " << result << endl;

    return 0;
}

