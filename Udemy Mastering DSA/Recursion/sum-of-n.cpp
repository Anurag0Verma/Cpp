#include <iostream>
#include <process.h>
using namespace std;

int formula_way(int n)
{
    return n * (n + 1) / 2;
}

int loop_way(int n)
{
    int s = 0;
    for (int i = 1; i <= n; i++)
    {
        s = s + i;
        /* code */
    }
    return s;
}

int recursion_way(int n)
{
    if (n == 0)
    {

        return 0;
    }
    else
        return recursion_way(n - 1) + n;
}
int main()
{
    system("cls");
    system("color a");

    int x, y, z, n;
    cout << "Sum of n Natural Number" << endl
         << "Enter N = ";
    cin >> n;
    x = formula_way(n);
    y = loop_way(n);

    z = recursion_way(n);

    cout << "Formula Way " << x << endl
         << "Loop Way " << y << endl
         << "Recursion Way " << z;

    return 0;
}