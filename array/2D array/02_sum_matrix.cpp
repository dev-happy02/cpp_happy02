#include <iostream>
using namespace std;

// Fix column size = 2
int sumMatrix(int arr[][2], int r, int c) {
    int sum = 0;
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            sum += arr[i][j];
        }
    }
    return sum;
}

int main() {
    int arr[2][2] = {{1,2},{3,4}};
    cout << "Sum = " << sumMatrix(arr, 2, 2);
    return 0;
}