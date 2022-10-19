// GFG Sum of array
// link = https://practice.geeksforgeeks.org/problems/c-arrays-sum-of-array-set-14805/1?page=1&difficulty[]=-2&category[]=Arrays&sortBy=submissions

#include <bits/stdc++.h>
using namespace std;

int getSum(int a[], int n)
{
    long long sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = (long long)sum + (long long)a[i];
        // sum=a[i]*(a[i]+1)/2;
    }

    return sum;
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

    cout << "sum = " << getSum(arr, n);
    return 0;
}