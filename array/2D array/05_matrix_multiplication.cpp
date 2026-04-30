#include <iostream>
using namespace std;

void multiply(int A[][3], int B[][3], int r1, int c1, int c2) {
    int result[3][3] = {0};

    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c2; j++) {
            for(int k = 0; k < c1; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c2; j++)
            cout << result[i][j] << " ";
        cout << endl;
    }
}

int main() {
    int A[2][3] = {{1,2,3},{4,5,6}};
    int B[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    multiply(A,B,2,3,3);
}