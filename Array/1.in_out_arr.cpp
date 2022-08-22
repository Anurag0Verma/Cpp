#include <iostream>
#include <process.h>
using namespace std;

int main()
{
    system("cls");
    system("color a");

    int n;
    cout << "n = ";
    cin >> n;
    int arr[n];
    cout << "arr[] =";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "printing arr" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
        /* code */
    }

    return 0;
}