// sort array of 0s,1s,2s(gfg)
// by code in 10 (ep 16)
#include <iostream>
#include <process.h>
using namespace std;

void sort012(int arr[], int n)
{
    // this algo is called Dutch Flag Algo
    int low = 0, mid = 0, high = n - 1;
    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[mid], arr[low]);
            mid++;
            low--;
        }
        else if (arr[mid] == 1)
        {
            /* code */
            mid++;
        }
        else
        {
            swap(arr[mid], arr[high]);
            high--;
        }

        /* code */
    }
    cout << "printing arr" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
        /* code */
    }
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
    sort012(arr, n);

    return 0;
}