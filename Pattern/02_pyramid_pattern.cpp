#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Outer loop for rows
    for(int i = 1; i <= n; i++) {

        // Print spaces
        for(int j = i; j < n; j++) {
            cout << " ";
        }

        // Print stars
        for(int k = 1; k <= i; k++) {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}