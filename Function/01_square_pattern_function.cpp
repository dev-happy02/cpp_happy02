#include <iostream>
using namespace std;

// Function to print square pattern
void printSquare(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    int n = 5;
    printSquare(n); // function call
    return 0;
}