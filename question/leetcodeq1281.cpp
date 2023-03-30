// 1281. subtract the product & sum of the digit
// Example
// input=234
// output=15
// explanation
// product of digit= 2x3x4=24
// sum of digit= 2+3+4=9
// subtract of product and sum

// result = 24 -9 = 15

#include <iostream>
#include <process.h>
using namespace std;

int main()
{
    system("cls");
    system("color a");

    int prod = 1, sum = 0, n;
    cin >> n;

    while (n != 0)
    {
        int digit = n % 10;
        prod *= digit;
        sum += digit;

        n = n / 10;
        /* code */
    }
    cout << prod - sum;

    return 0;
}