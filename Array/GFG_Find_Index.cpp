
// link  = https://practice.geeksforgeeks.org/problems/find-index4752/1?page=1&difficulty[]=-2&category[]=Arrays&sortBy=submissions
#include <bits/stdc++.h>
using namespace std;

vector<int> findIndex(int a[], int n, int key)
{
    vector<int> v;
    // code here.
    for (int i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            v.push_back(i);
            break;
        }
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] == key)
        {
            v.push_back(i);
            break;
        }
    }
    // if no array match and vector is empty
    if (v.empty())
        return {-1, -1};
    // else
    return v;
}

int main()
{
    system("cls");
    int n, key;
    cout << "n = ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }
    cout << "Key = ";
    cin >> key;
    vector<int> v = findIndex(arr, n, key);

    for (auto i : v)
    {
        cout << i;
    }

    return 0;
}