#include <iostream>
using namespace std;

void transpose(int arr[][3], int r, int c) {
    for(int i = 0; i < c; i++) {
        for(int j = 0; j < r; j++)
            cout << arr[j][i] << " ";
        cout << endl;
    }
}

int main() {
    int arr[2][3] = {{1,2,3},{4,5,6}};
    transpose(arr,2,3);
}