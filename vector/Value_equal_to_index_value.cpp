// GFG question
// link = https://practice.geeksforgeeks.org/problems/value-equal-to-index-value1330/1?page=1&difficulty[]=-2&category[]=Arrays&sortBy=submissions
// Value equal to index value

#include <bits/stdc++.h>
using namespace std;

vector<int> valueEqualToIndex(int arr[], int n)
{

    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == i + 1)
        {
            v.push_back(arr[i]);
        }
    }
    return v;
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

    auto ans = valueEqualToIndex(arr, n);

    if (ans.empty())
    {
    }
    else
    {
        for (int x : ans)
        {
            cout << x;
        }
        cout << endl;
    }

    return 0;
}
