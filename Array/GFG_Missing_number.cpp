// Missing number in array
// link=https://practice.geeksforgeeks.org/problems/missing-number-in-array1416/1?page=1&difficulty[]=0&sortBy=submissions
#include <bits/stdc++.h>
using namespace std;

int MissingNumber1(int array[], int n)
{
    // my way but time limit exceed
    int c = 1, i = 0;
    for (i; i < n;)
    {
        if (array[i] == c)
        {

            c++;
            i = 0;
            continue;
        }
        if (i == n - 1)
        {
            return c;
        }
        i++;
    }
    return -1;
}

int MissingNumber2(int array[], int n)
{
    // Your code goes here
    int i = 0;
    while (i < n)
    {
        int correct = array[i] - 1;
        if (array[i] < n && array[i] != array[correct])
        {
            swap(array[i], array[correct]);
        }
        else
        {
            i++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (i != array[i] - 1)
        {
            return i + 1;
        }
    }
}

int MissingNumber3(int array[], int n)
{
    // Your code goes

    int sum = 0;

    int expectedsum = (n * (n + 1) / 2);
    for (int i = 0; i < n - 1; i++)
        sum += array[i];

    return expectedsum - sum;
}

int main()
{
    system("cls");

    int n;
    cout << "n = ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }
    cout << "My way but time limit exceed for large array = " << MissingNumber1(arr, n) << endl;
    cout << "cyclic sort way but run time error for large array = " << MissingNumber2(arr, n) << endl;
    cout << "right way with no errors = " << MissingNumber3(arr, n) << endl;
    return 0;
}