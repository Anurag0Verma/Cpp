#include <iostream>
#include <process.h>
using namespace std;

int main()
{
    system("cls");
    system("color a");

    int n;
    cin >> n;

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (((i + j) % 4 == 0) || (i == 2 && j % 4 == 0))
            {
                /* code */
                cout << "*";
            }
            else
            {
                cout << " ";
                /* code */
            }

            /* code */
        }
        cout << endl;

        /* code */
    }

    return 0;
}