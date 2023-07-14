#include <bits/stdc++.h>
using namespace std;

int countPrimes(int n)
{
    //    //     t.c=On2 s.c=On time limit exceeded solution
    //     int c = 0, f = 0;
    //     if (n < 2)
    //         return 0;
    //     for (int i = 2; i < n; i++)
    //     {
    //         for (int j = 2; j * j <= i; j++)
    //         {
    //             if (i % j == 0 and j not_eq i)
    //             {
    //                 f = 1;
    //                 break;
    //             }
    //         }
    //         if (f == 0)
    //         {
    //             cout << i << " ";
    //             c++;
    //         }

    //         else
    //             f = 0;
    //     }
    //     cout << endl;

    //      sieve of eratosthenes
    //  tc=Onlogn  sc=On
    bool *isprime = new bool[n];

    for (int i = 2; i < n; i++)
        isprime[i] = true;

    int c = 0;
    for (int i = 2; i * i < n; i++)
    {
        if (!isprime[i])
            continue;

        for (int j = i * i; j < n; j += i)
        {
            isprime[j] = false;
        }
    }

    for (int i = 2; i < n; i++)
    {
        if (isprime[i])
        {
            cout << i << " ";
            c++;
        }
    }
    cout << endl;

    return c;
}

int main()
{
    cout << (countPrimes(10));

    return 0;
}