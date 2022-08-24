// problem
// aiven an a[]of size n. for every i form 0 to n-1
// output max (a[0],a[1],....,a[i])

#include <iostream>
#include <process.h>
#include <limits.h>
using namespace std;

void printarr(int mx, int mn)
{

    cout << mx << endl
         << mn;
    /* code */
}
int main()
{
    system("cls");
    system("color a");
    int mx = INT_MIN, n, mn = INT_MAX;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        /* code */
    }

    for (int i = 0; i < n; i++)
    {
        mx = max(mx, arr[i]);
        mn = min(mn, arr[i]);

        /* code */
    }
    printarr(mx, mn);

    return 0;
}