#include <iostream>
#include <process.h>
using namespace std;

int main()
{
    system("cls");
    system("color a");

    int i, a, b, n;
    cout << "Enter range  ";
    cin >> a >> b;
    cout << "Printing primes" << endl;
    for (int num = a; num <= b; num++)

    {

        for (i = 2; i < num; i++)
        {
            if (num % i == 0)
            {

                break;
            }
        }
        if (i == num)
        {
            cout << i << endl;
        }
    }

    return 0;
}