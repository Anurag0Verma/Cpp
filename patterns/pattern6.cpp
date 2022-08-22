#include <iostream>
#include <process.h>
using namespace std;

int main()
{
    system("cls");
    system("color a");

    int n, count = 1;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {

            cout << count << " ";
            count++;
            /* code */
        }
        cout << endl;
    }

    return 0;
}