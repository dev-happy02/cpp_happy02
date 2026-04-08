#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cin >> n;  // Take input number

    // Loop until number becomes 0
    while(n > 0) {
        int digit = n % 10;  // Get last digit
        sum += digit;        // Add digit to sum
        n /= 10;             // Remove last digit
    }

    cout << sum;  // Print result
    return 0;
}