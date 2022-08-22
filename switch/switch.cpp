#include <iostream>
#include <process.h>
using namespace std;

int main()
{
    system("cls");
    system("color a");
    char button;
    cin >> button;
    switch (button)
    {
    case 'a':
        cout << "hello";
        break;
    case 'b':
        cout << "Namasta";
        break;
    case 'c':
        cout << "hola";
        break;
    case 'd':
        cout << "salut";
        break;
    case 'e':
        cout << "caio";
        break;
    default:
        cout << "i am still learning";
        break;
    }

    return 0;
}