#include <iostream>
#include <process.h>
using namespace std;

int main()
{
    system("cls");
    system("color a");
    int a = 0, b = 1, n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int nextnum = a + b;
        cout << nextnum << " ";

        a = b;
        b = nextnum;
        /* code */
    }

    return 0;
}