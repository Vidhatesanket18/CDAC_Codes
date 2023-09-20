#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
    // Check if there are at least two arguments (program name and one user-supplied argument)
    if (argc < 2) {
        cout << "Usage: " << argv[0] << " <argument>" << endl;
        return 1;
    }

    // Access and print the command line arguments
    cout << "Command line arguments:";
    for (int i = 1; i < argc; i++) {
        cout << " " << argv[i];
    }
    cout <<endl;

    return 0;
}

