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

void rotateArr(int arr[], int d, int n)
{
    d = d % n;
    reverse(arr, 0, d - 1);
    reverse(arr, d, n - 1);
    reverse(arr, 0, n - 1);
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

    rotateArr(arr, d, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
        /* code */
    }

    return 0;
}