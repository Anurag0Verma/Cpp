// basicly it means m multiply by n times
// this is how power function work
#include <bits/stdc++.h>
using namespace std;

int pow(int m, int n)
{

    if (n == 0)
        return 1;
    int a = pow(m, n - 1) * m;
    return a;
}

int main()
{
    cout << pow(2, 9);
    return 0;
}