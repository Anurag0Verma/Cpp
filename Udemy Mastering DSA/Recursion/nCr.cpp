// nCr = combination

#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    if (n == 1)
        return 1;
    return fact(n - 1) * n;
}

int nCr(int n, int r)
{

    int numerator, denominator;
    numerator = fact(n);
    denominator = fact(r) * fact(n - r);
    return numerator / denominator;
}

int NCR(int n, int r)
{
    if (n == r || r == 0)
        return 1;
    return NCR(n - 1, r - 1) + NCR(n - 1, r);
}

int main()
{
    system("cls");
    cout << "using factorial function = " << nCr(5, 3) << endl;
    cout << "without using factorial function = " << NCR(5, 3);
    return 0;
}