#include <iostream>
#include <process.h>
using namespace std;

int main()
{
    system("cls");
    system("color a");

    int row, col;
    cout << "Enter the row ";
    cin >> row;
    cout << "Enter the col ";
    cin >> col;

    for (int i = 1; i <= row; i++)
    {
        /* code */
        for (int j = 1; j <= col; j++)
        {
            /* code */
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}