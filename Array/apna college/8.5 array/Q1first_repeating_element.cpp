#include <iostream>
#include <limits.h>
#include <process.h>
using namespace std;

int main()
{
    system("cls");
    system("color a");

    int n;
    cout << "n = ";
    cin >> n;
    int arr[n];
    cout << "arr[] = ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // const keyword is use then nobody can change the value of N
    // 1e6=10 ke power 6
    const int N = 1e6 + 2;
    int idx[N];
    for (int i = 0; i < N; i++)
    {
        idx[i] = -1;
    }
    int minidx = INT_MAX;

    for (int i = 0; i < n; i++)
    {

        if (idx[arr[i]] != -1)
        { // if idx is not -1 then take the min
            minidx = min(minidx, idx[arr[i]]);
        }
        else
        { // otherwice
            // updating idx
            idx[arr[i]] = 1;
        }
    }
    if (minidx == INT_MAX)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << minidx + 1 << endl;
    }

    return 0;
}