// link= https://practice.geeksforgeeks.org/problems/check-for-binary/1?page=1&difficulty[]=-2&sortBy=submissions

#include <bits/stdc++.h>
using namespace std;

bool isBinary(string str)
{

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] != '0' || str[i] != '1')
            return false;
    }

    return true;
}

int main()
{
    system("cls");
    string n;
    cin >> n;

    cout << isBinary(n);
    return 0;
}