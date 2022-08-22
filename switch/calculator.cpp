#include <iostream>
#include <process.h>
using namespace std;

int main()
{
    system("cls");
    system("color a");
    int n1, n2;
    cout << "Enter 1st number ";
    cin >> n1;
    cout << "Enter 2nd number ";
    cin >> n2;
    char op;
    cout << "Enter the operator" << endl
         << " + , - , x , / , %  " << endl;
    cin >> op;
    switch (op)
    {
    case '+':
        cout << "Addition = " << n1 + n2;
        break;
    case '-':
        cout << "Substraction = " << n1 - n2;
        break;
    case 'x':
        cout << "Multiply = " << n1 * n2;
        break;
    case '/':
        cout << "Divide = " << n1 / n2;
        break;
    case '%':
        cout << "Remainder = " << n1 % n2;
        break;
    default:
        cout << "Invailed Operator";
        break;
    }
    return 0;
}