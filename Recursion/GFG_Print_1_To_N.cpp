// link= https://practice.geeksforgeeks.org/problems/print-1-to-n-without-using-loops-1587115620/1?page=1&difficulty[]=-2&sortBy=submissions

#include <bits/stdc++.h>
using namespace std;

void printNos(int N)
{
    if (N == 0)
        return;
    printNos(N - 1);
    cout << N << " ";
}

int main()
{
    system("cls");

    int n;
    cout << "Enter N's value = ";
    cin >> n;

    cout << "Printing 1 to " << n << " = ";
    printNos(n);
    return 0;
}