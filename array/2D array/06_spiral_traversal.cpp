#include <iostream>
using namespace std;

void spiral(int arr[][3], int r, int c) {
    int top=0, bottom=r-1, left=0, right=c-1;

    while(top<=bottom && left<=right) {

        for(int i=left;i<=right;i++) cout<<arr[top][i]<<" ";
        top++;

        for(int i=top;i<=bottom;i++) cout<<arr[i][right]<<" ";
        right--;

        for(int i=right;i>=left;i--) cout<<arr[bottom][i]<<" ";
        bottom--;

        for(int i=bottom;i>=top;i--) cout<<arr[i][left]<<" ";
        left++;
    }
}

int main() {
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    spiral(arr,3,3);
}