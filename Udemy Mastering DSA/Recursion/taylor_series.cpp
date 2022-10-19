#include <bits/stdc++.h>
using namespace std;

double t1(int x, int n)
{
    static double p = 1, f = 1;
    double r;
    if (n == 0)
        return 1;
    r = t1(x, n - 1);
    p = p * x;
    f = f * n;
    return r + p / f;
}

double t2(int x, int n)
{
    static double s;
    if (n == 0)
        return s;
    s = 1 + x * s / n;
    return t2(x, n - 1);
}

double t3(int x, int n)
{
    double s = 1, num = 1, den = 1;

    for (int i = 1; i <= n; i++)
    {
        n = num * x;
        den = den * i;
        s = s + num / den;
    }
    return s;
}

int main()
{
    system("cls");
    cout << "Nomal way = " << t1(1, 10) << endl;
    cout << "Using Honer's Rule = " << t2(1, 10) << endl;
    cout << "Iterative way = " << t3(1, 10) << endl;
    return 0;
}