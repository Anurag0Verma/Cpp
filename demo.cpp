#include <iostream>
#include <process.h>
using namespace std;

int main()
{
    system("cls");
    system("color a");

    int num1, num2;
    cin >> num1 >> num2;
    int sum = num1 + num2;
    cout << sum << endl;

    return 0;
}