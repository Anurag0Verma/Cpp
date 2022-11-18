#include <bits\stdc++.h>
using namespace std;

int main()
{
    system("cls");
    system("color a");
    int n;
    cout << "Enter size ";
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }

    int diff = a[0];

    for (int i = 0; i < n; i++)
    {
        if (a[i] - i != diff)
        {
            cout << "missing no = " << i + diff;
            break;
        }
        /* code */
    }

    return 0;
}