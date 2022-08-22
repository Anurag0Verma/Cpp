// 8.4 apna college
// question from google kickstart
#include <iostream>
#include <process.h>
using namespace std;

int main()
{
    system("cls");
    system("color a");

    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        /* code */
    }
    int curr = 2, ans = 2, pd = a[1] - a[0], j = 2;

    while (j < n)
    {
        if (pd == a[j] - a[j - 1])
        {
            curr++;
            /* code */
        }
        else
        {
            pd = a[j] - a[j - 1];

            curr = 2;

            /* code */
        }
        ans = max(ans, curr);
        j++;
    }

    cout << ans;
    return 0;
}