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
        /* code */
        for (int j = 1; j <= i; j++)
        {
            /* code */
            if ((i + j) % 2 == 0)
            {
                cout << "0";
                /* code */
            }
            else
            {
                cout << "1";
            }
        }
        cout << endl;
    }

    return 0;
}