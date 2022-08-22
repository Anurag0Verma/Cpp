// majority elements (gfg)
// code in 10 (17)

#include <iostream>
#include <process.h>
using namespace std;

int mejorityElement(int arr[], int n)
{
    // using moure"s voting algo
    int el = 0, count = 0;

    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        {

            el = arr[i];
        }
        if (el == arr[i])
        {
            count++;
        }
        else
        {
            count--;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (el == arr[i])
        {
            count++;
        }
    }
    if (count > n / 2)
    {
        return el;
    }
    return -1;
}

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
    cout << mejorityElement(arr, n);

    return 0;
}