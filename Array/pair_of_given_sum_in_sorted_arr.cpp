// nishant chahar ep 15
// pair_of_given_sum_in_sorted_arr by gfg
// input
// n=7
// arr[]= {1 2 3 4 5 6 7}
// sum =8
// output = 3
//  axplanation
//

#include <iostream>
#include <process.h>
using namespace std;

int Countpair(int arr[], int n, int sum)
{
    int i = 0, j = n - 1, k = 0, ans = 0;
    while (i < j)
    {
        k = arr[i] + arr[j];
        if (k == sum)
        {
            ans++;
            i++;
            j--;
        }
        else if (k > sum)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    if (ans == 0)
    {
        return -1;
    }
    return ans;
}

int main()
{
    system("cls");
    system("color a");

    int n;
    cout << "n = ";
    cin >> n;
    int arr[n];
    cout << "arr[] = ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "sum = ";
    int sum;
    cin >> sum;
    cout << Countpair(arr, n, sum);

    return 0;
}