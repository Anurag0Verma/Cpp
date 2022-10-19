// link = https://practice.geeksforgeeks.org/problems/perfect-arrays4645/1?page=1&difficulty[]=-2&category[]=Arrays&sortBy=submissions

#include <bits/stdc++.h>
using namespace std;

bool IsPerfect(int a[], int n)
{
    bool ans;

    for (int i = 0; i < n / 2; i++)
    {
        if (a[i] == a[(n - 1) - i])
            ans = true;
        else
            ans = false;
    }
    return ans;
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

    return 0;
}