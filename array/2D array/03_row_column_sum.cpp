#include <iostream>
using namespace std;

// Fix column size = 3
void rowSum(int arr[][3], int r, int c) {
    for(int i = 0; i < r; i++) {
        int sum = 0;
        for(int j = 0; j < c; j++) {
            sum += arr[i][j];
        }
        cout << "Row " << i << " Sum = " << sum << endl;
    }
}

void colSum(int arr[][3], int r, int c) {
    for(int j = 0; j < c; j++) {
        int sum = 0;
        for(int i = 0; i < r; i++) {
            sum += arr[i][j];
        }
        cout << "Col " << j << " Sum = " << sum << endl;
    }
}

int main() {
    int arr[2][3] = {{1,2,3},{4,5,6}};

    rowSum(arr,2,3);
    colSum(arr,2,3);

    return 0;
}