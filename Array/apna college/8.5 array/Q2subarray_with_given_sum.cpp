#include <iostream>
#include <process.h>
using namespace std;

int main()
{
    system("cls");
    system("color a");
    int n, S;
    cout << "n = ";
    cin >> n;
    cin >> S;
    int arr[n];
    cout << "arr[] =";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int i = 0, j = 0, st = -1, en = -1, sum = 0;
    while (j < n && sum + arr[j] <= S)
    {
        sum = sum + arr[j];
        j++;
    }

    if (sum == S)
    {
        cout << i + 1 << " " << j;
        return 0;
    }
    while (j < n)
    {
        sum += arr[j];
        while (sum > S)
        {
            sum = sum - arr[i];
            i++;
        }

        if (sum == S)
        {
            st = i + 1;
            en = j + 1;
            break;
        }
        j++;
    }

    cout << st << " " << en;
    return 0;
}