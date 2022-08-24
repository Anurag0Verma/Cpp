// count digit (gfg)

#include <iostream>
#include <process.h>
using namespace std;

int main()
{
    system("cls");
    system("color a");
    int N;
    cin >> N;
    int temp = N, count = 0;
    while (temp != 0)
    {
        // extract the last digit
        int d = temp % 10;
        temp /= 10;

        // check if d divide N completly
        if (d > 0 && N % d == 0)
            count++;
    }
    cout << count;

    return 0;
}