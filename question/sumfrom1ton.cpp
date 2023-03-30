#include <iostream>
#include <process.h>
using namespace std;

int main()
{
    system("cls");
    system("color a");
    int sum = 0, n;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        sum += i;
        /* code */
    }
    cout << sum;

    return 0;
}