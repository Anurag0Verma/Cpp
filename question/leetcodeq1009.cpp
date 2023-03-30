// compliment of base 10 integer
// the compliment of the integer is the integer you get when you flip all the 0's to 1's and 1's to 0's in its binary representation.
// .. for example the integer 5 is 101 in binary and its compliment is 010 which is the integer 2.

// given an intiger n return its compliment

// example
// input n= 5
// output =2

#include <iostream>
#include <process.h>
using namespace std;

int main()
{
    system("cls");
    system("color a");

    int n;
    cin >> n;
    int mask = 0, m = n;

    if (n == 0)
    {
        cout << 1;
        exit(0); // exit function is used to terminate the program
        /* code */
    }

    while (m != 0)
    {
        mask = (mask << 1) | 1;
        m = m >> 1;
        /* code */
    }
    int ans = (~n) & mask;
    cout << ans;

    return 0;
}