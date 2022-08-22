#include <iostream>
#include <process.h>
using namespace std;

int main()
{
    system("cls");
    system("color a");
    int n;
    cout << "Code to skip divided by 3" << endl
         << "Enter a number = ";
    cin >> n;
    cout << "printing " << endl;
    for (int i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        cout << i << endl;
    }

    return 0;
}