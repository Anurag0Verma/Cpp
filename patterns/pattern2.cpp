#include <iostream>
#include <process.h>
using namespace std;

int main()
{
    system("cls");
    system("color a");

    int row, col;
    cout << "Enter row";
    cin >> row;
    cout << "Enter col";
    cin >> col;

    for (int i = 1; i <= row; i++)
    {
        /* code */
        for (int j = 1; j <= col; j++)
        {
            /* code */
            if (i == 1 || i == row || j == 1 || j == col)
            {
                cout << j << " ";
                /* code */
            }

            else
            {
                cout << "  ";
                /* code */
            }
        }
        cout << endl;
    }

    return 0;
}