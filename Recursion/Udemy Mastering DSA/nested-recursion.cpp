#include <iostream>
#include <process.h>
using namespace std;

int fun(int n)
{
    if (n > 100)
    {
        return n - 10;
    }
    return fun(fun(n + 11));
}

int main()
{
    system("cls");
    system("color a");

    int r = fun(95);

    cout << r;

    return 0;
}