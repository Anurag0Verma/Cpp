// find unique question by codestdio
// find the elements that appear once question in gfg
#include <iostream>
#include <process.h>
using namespace std;
int findunique(int *arr, int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
        /* code */
    }
    return ans;
}

int main()
{
    system("cls");
    system("color a");
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        /* code */
    }
    // input
    // size 7
    // elements 1 2 3 4 3 2 1
    // output
    // unique element 4
    cout << "unique element is " << findunique(arr, size);

    return 0;
}