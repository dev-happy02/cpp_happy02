#include <iostream>
using namespace std;
int main()
{
    int arr [] = {23,43,54,56,3,54};
    int sum = 0;
    for (int i=0; i<=6; i++)
    {
        sum += arr[i];
    }
    cout << "Sum: " << sum << endl;
    return 0;
}