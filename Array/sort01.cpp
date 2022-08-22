// question by codestdio
#include <iostream>
#include <process.h>
using namespace std;
void swap01(int arr[], int size)
{
    int steps = 0, left = 0, right = size - 1;

    while (left < right)
    {
        cout << "step " << steps++ << endl;

        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << ' ';
            /* code */
        }
        cout << endl;
        if (left < right)
        {
            while (arr[left] == 0)
            {
                left++;
                /* code */
            }
            while (arr[right] == 1)
            {
                right--;
                /* code */
            }
            if (left < right)
            {
                swap(arr[left], arr[right]);
                left++;
                right--;
                /* code */
            }
        }
    }
}
void printarr(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ' ';
        /* code */
    }
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
    swap01(arr, size);

    return 0;
}