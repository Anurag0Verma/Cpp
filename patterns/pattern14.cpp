#include <iostream>
#include <process.h>
using namespace std;

int main()
{
    system("cls");
    system("color a");
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n * 2; j++)
        {
            if (j <= i || j > 2 * n - i)
            {
                cout << "*";
            }
            else
            {
                cout << "#";
            } /* code */
        }
        cout << endl;
        /* code */
    }
    cout << endl
         << endl;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n * 2; j++)
        {
            if (j > i && j <= (2 * n) - i)
            {
                cout << "#";
            }
            else
            {
                cout << "*";
            } /* code */
        }
        cout << endl;
        /* code */
    }

    return 0;
}