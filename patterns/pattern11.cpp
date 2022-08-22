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
        int space = n - i;
        for (int j = 1; j <= space; j++)
        {
            cout << "  ";
        }
        for (int j = i; j >= 1; j--)
        {
            /* code */
            cout << j << " ";
        }
        for (int j = 2; j <= i; j++)
        {
            /* code */
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}