#include <iostream>
using namespace std;

int main() {
    int n, sum = 0, temp;

    cin >> n;       // Input number
    temp = n;       // Store original number

    // Calculate sum of cubes of digits
    while(n > 0) {
        int digit = n % 10;
        sum += digit * digit * digit;
        n /= 10;
    }

    // Check Armstrong condition
    if(sum == temp)
        cout << "Armstrong";
    else
        cout << "Not Armstrong";

    return 0;
}