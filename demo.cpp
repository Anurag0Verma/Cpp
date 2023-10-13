#include <bits\stdc++.h>
using namespace std;

int main()
{
    int a[] = {48, 96, 46, 75, 71, 5, 58, 57}, n = sizeof(a) / sizeof(a[0]);
    int largest = -1, secondlargest = -1;
    int smallest = INT_MAX, secondsmallest = 0;
    for (int i = 0; i < n; i++)
    {
        if (largest < a[i])
        {
            secondlargest = largest;
            largest = a[i];
        }
        else if (a[i] < largest && a[i] > secondlargest)
        {
            secondlargest = a[i];
        }

        if (smallest > a[i])
        {
            secondsmallest = smallest;
            smallest = a[i];
        }

        else if (a[i] > smallest && a[i] < secondsmallest)
        {
            secondsmallest = a[i];
        }
    }

    cout << secondlargest << " " << secondsmallest;
}
