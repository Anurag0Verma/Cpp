// apna college 8.4 array challange
// problem
// givem an array a[] of size n.
// output sum of each subarray of the given array
// example
// 122
// subarrays
// 1 12 122 2 22 2
// sum 1=1
// 1+2=3
// 1+2+2=5
// 2
// 2+2=4
// 2=2
#include <iostream>
#include <process.h>

using namespace std;

int main()
{
    system("cls");
    system("color a");
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        /* code */
    }

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        /* code */
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            cout << sum << endl;

            /* code */
        }
        cout << endl;
    }

    return 0;
}