// important

//  7. reverse integer
// given a signed 32-bits integer x , return x with its digit reversed
// if reversing x cause the value to go outside the signed 32 bits
// intiger range [-2^32 , 2^32-1], then return 0
// assumed the enviroment does not allow you to store 64 bits integers
// (signed or unsinged)

// example
// input 123
// output 321

#include <iostream>
#include <process.h>
#include <limits.h>
using namespace std;

int main()
{
    system("cls");
    system("color a");

    int x, ans = 0, digit;
    cin >> x;
    while (x != 0)
    {
        digit = x % 10;
        if ((ans > INT32_MAX / 10) || (ans < INT32_MIN / 10))
        {
            cout << 0;
        }

        ans = (ans * 10) + digit;
        x = x / 10;
        /* code */
    }
    cout << ans;

    return 0;
}