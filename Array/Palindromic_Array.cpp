// GFG Palindromic Array
// link = https://practice.geeksforgeeks.org/problems/palindromic-array-1587115620/1?page=1&difficulty[]=-2&category[]=Arrays&sortBy=submissions

#include <bits/stdc++.h>
using namespace std;

int PalinArray(int a[], int n)
{
    int rev, dig, temp, count;
    count = 0;
    for (int i = 0; i < n; i++)
    {
        rev = dig = temp = 0;
        temp = a[i];

        while (temp != 0)
        {
            dig = temp % 10;
            rev = rev * 10 + dig;
            temp /= 10;
        }
        if (a[i] == rev)
            count++;
    }
    if (count == n)
        return 1;
    return 0;
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

    cout << PalinArray(arr, n);

    return 0;
}