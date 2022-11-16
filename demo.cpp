#include <bits\stdc++.h>
using namespace std;

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int linsearch(int arr[], int n, int it)
{
    for (int i = 0; i < n; i++)
        if (arr[i] == it)
            return i;
    return -1;
}

int binsearch(int arr[], int n, int it)
{
    int s = 0, e = n - 1;
    while (s <= e)
    {
        int mid = s + e / 2;
        if (arr[mid] == it)
            return mid;
        else if (arr[mid] < it)
            s = mid + 1;
        else
            e = mid - 1;
    }
    return -1;
}

void insert(int arr[], int &n, int ind, int x)
{
    for (int i = n; i > ind; i--)
        arr[i] = arr[i - 1];
    arr[ind] = x;
    n++;
}

void rotation(int arr[], int n, int d)
{
    int t = d % n;

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

void del(int arr[], int &n, int ind)
{
    int x = arr[ind];
    for (int i = ind; i < n - 1; i++)
        arr[i] = arr[i + 1];
    n--;
}

int MissingNumber2(int array[], int n)
{
    // Your code goes here
    for (int i = 1; i < n; i++)
    {
        if (array[i - 1] != i)
            return i;
    }
    return -1;
}

int main()
{
    int arr[50] = {1, 2, 3, 5, 6, 7, 8};
    int n = 7;
    insert(arr, n, 3, 4);
    display(arr, n);

    del(arr, n, 3);
    display(arr, n);

    cout << MissingNumber2(arr, n) << endl;
    rotation(arr, n, 4);
    display(arr, n);
    return 0;
}