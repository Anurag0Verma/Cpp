// GFG Sum of Series
// link=https://practice.geeksforgeeks.org/problems/sum-of-series2811/1?page=1&difficulty[]=-2&category[]=Arrays&sortBy=submissions

#include <bits/stdc++.h>
using namespace std;

long long seriesSum(int n)
{
    /*
    error when i hit subhit button = Possibly your code does not work correctly for multiple test-cases (TCs)

    if code this and not type cast n and n+1 in long long
    long long ans = n*(n+1)/2;
    */
    // this is right
    long long ans = (long long)n * (long long)(n + 1) / 2;
    return ans;
}

int main()
{
    system("cls");
    int n;
    cin >> n;
    cout << seriesSum(n);
    return 0;
}