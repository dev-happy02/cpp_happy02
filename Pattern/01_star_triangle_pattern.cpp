#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;  // Number of rows

    // Outer loop for rows
    for(int i = 1; i <= n; i++) {
        // Inner loop for stars
        for(int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}