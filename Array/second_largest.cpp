#include <bits/stdc++.h>
using namespace std;

int print2largest(int arr[], int n)
{
    // code here
    int largest, second_largest;
    largest = second_largest = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (largest < arr[i])
        {
            second_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > second_largest)
            second_largest = arr[i];
    }
    if (second_largest == INT_MIN)
        return -1;
    return second_largest;
}
int main()
{
    system("cls");
    int n;
    cout << "n = ";
    cin >> n;
    int arr[n];
    cout << "arr[] =";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "second largest = " << print2largest(arr, n);
    return 0;
}