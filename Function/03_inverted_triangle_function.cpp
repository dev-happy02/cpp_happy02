#include <iostream>
using namespace std;

void printInvertedTriangle(int n) {
    for(int i = n; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    int n = 5;
    printInvertedTriangle(n);
    return 0;
}