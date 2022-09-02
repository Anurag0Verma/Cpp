#include <iostream>
#include <process.h>
using namespace std;

void fun(int n)
{
    if (n > 0)
    {
        cout << n << " ";
        fun(n - 1);
        fun(n - 1);
        /* code */
    }
}

int main()
{
    system("cls");
    system("color a");

    fun(3);

    return 0;
}