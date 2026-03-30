#include <iostream>
using namespace std;

int main() {
    int arr[6] = {10, 20, 4, 45, 99, 99};
    int n = 6;

    int largest = arr[0];
    int secondLargest = -1;

    // Find largest
    for(int i = 1; i < n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }

    // Find second largest
    for(int i = 0; i < n; i++) {
        if(arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if(secondLargest == -1)
        cout << "No second largest element";
    else
        cout << "Second Largest = " << secondLargest;

    return 0;
}