#include <iostream>
using namespace std;

void printDiamond(int n) {
    // Upper part
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n - i; j++) cout << " ";
        for(int j = 1; j <= (2*i - 1); j++) cout << "*";
        cout << endl;
    }

    // Lower part
    for(int i = n-1; i >= 1; i--) {
        for(int j = 1; j <= n - i; j++) cout << " ";
        for(int j = 1; j <= (2*i - 1); j++) cout << "*";
        cout << endl;
    }
}

int main() {
    int n = 5;
    printDiamond(n);
    return 0;
}