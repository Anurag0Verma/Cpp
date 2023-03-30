// 191. number of 1bits
// WAP that take an unsigned integer and return the numbers of '1' bits
// (it has also known as the humming weight)

// example
// input n= 0000000000000000000000001011
// output =3
// explanation
// the binary sting 000000000000000000000000000001011 has a total
// of three '1' bits.

#include <iostream>
#include <process.h>
using namespace std;

int main()
{
    system("cls");
    system("color a");

    int count = 0;
    unsigned int n;
    cin >> n;
    while (n != 0)
    {
        // checking last bit
        if (n & 1)
        {
            count++;
            /* code */
        }
        n = n >> 1;

        /* code */
    }

    cout << count;

    return 0;
}