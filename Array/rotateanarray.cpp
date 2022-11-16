// nishant chahar ep 14
//  rotate an array question by gfg
// input
// n =5 d = 2
// arr[] = {1,2,3,4,5}
// output 3 4 5 1 2
// explanation 1 2 3 4 5 when rotated by 2 elements , it become 3 4 5 1 2

#include <iostream>
#include <process.h>
using namespace std;

void reverse(int arr[], int s, int e)
{
    while (s < e)
    {
        int temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;
        s++;
        e--;
    }
}

void rotateArr(int arr[], int n, int d)
{
    d = d % n;
    reverse(arr, 0, d - 1);
    reverse(arr, d, n - 1);
    reverse(arr, 0, n - 1);
}

void rotation(int arr[], int n, int d)
{
    int t = d % n

            while (t--)
    {
        int temp = arr[0];
        for (int i = 0; i < n; i++)
        {
            arr[i] = arr[i + 1];
        }
        arr[n - 1] = temp;
    }
}

int main()
{
    system("cls");
    system("color a");

    int n, d;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cin >> d;
    //  use any one algo

    //  rotateArr(arr, n, d);
    //  rotation(arr,n,d)
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
        /* code */
    }

    return 0;
}