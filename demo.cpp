#include <bits/stdc++.h>
using namespace std;

int MissingNumber(int array[], int n)
{
    // Your code goes here
    int c = 1, i = 0;
    for (i; i < n;)
    {
        if (array[i] == c)
        {

            c++;
            i = 0;
            continue;
        }

        if (i == n - 1)
        {
            return c;
        }
        i++;
    }
    return -1;
}

int main()
{
    system("cls");

    int n;
    cout << "n = ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }
    cout << MissingNumber(arr, n);
    return 0;
}