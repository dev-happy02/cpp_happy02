#include <iostream>
using namespace std;

void inputMatrix(int arr[100][100], int r, int c) {
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cin >> arr[i][j];
        }
    }
}

void displayMatrix(int arr[100][100], int r, int c) {
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int r = 3, c = 3;
    int arr[100][100];

    inputMatrix(arr, r, c);
    displayMatrix(arr, r, c);

    return 0;
}