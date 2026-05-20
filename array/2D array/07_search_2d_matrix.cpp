#include <iostream>
using namespace std;

bool searchMatrix(int arr[][3], int r, int c, int key) {
    int i = 0, j = c - 1;

    while(i < r && j >= 0) {
        if(arr[i][j] == key) return true;
        else if(arr[i][j] > key) j--;
        else i++;
    }
    return false;
}

int main() {
    int arr[3][3] = {{1,4,7},{2,5,8},{3,6,9}};

    if(searchMatrix(arr,3,3,5))
        cout << "Found";
    else
        cout << "Not Found";
}