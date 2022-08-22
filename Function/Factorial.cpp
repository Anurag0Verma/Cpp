#include <iostream>
#include <process.h>
using namespace std;

int Factorial(int n)
{
    int sum = 1;
    for (int i = 1; i <= n; i++)
    {
        sum = sum * i;
        /* code */
    }

    return sum;
}

int main()
{
    system("cls");
    system("color a");
    int n;
    cin >> n;

    cout << "Factorial of " << n << " is " << Factorial(n) << endl;
    return 0;
}