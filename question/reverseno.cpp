#include <iostream>
#include <process.h>
using namespace std;

int main()
{
    system("cls");
    system("color a");

  int n,rev=0;
  cin>>n;

  while (n!=0)
  {
    int lastdigit=n%10;
    rev=(rev*10)+lastdigit;

    n/=10;
    /* code */
  }
    
cout<<rev;
    return 0;
}