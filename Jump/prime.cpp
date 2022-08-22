#include <iostream>
#include <process.h>
using namespace std;

int main()
{
    system("cls");
    system("color a");

    int i, n;
    cout << "Enter a number ";
    cin >> n;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "not prime";
            break;
        }
    }
    if (i == n)
    {
        cout << "Prime"; /* code */
    }

    return 0;
}