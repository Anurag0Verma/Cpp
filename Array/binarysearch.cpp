#include <iostream>
#include <process.h>
using namespace std;
int binarysearch(int arr[], int n, int key)
{
    int start = 0, end = n;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == key)
        {
            /* code */
            return mid;
        }

        else if (arr[mid] > key)
        {
            end = mid - 1;
            /* code */
        }
        else
            start = mid + 1;

        /* code */
    }
    return -1;
}
int main()
{
    system("cls");
    system("color a");

    int n;

    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        /* code */
    }
    cout << endl
         << "Enter the element you want to find" << endl;
    int key;
    cin >> key;

    cout<<binarysearch(arr,n,key);

    return 0;
}