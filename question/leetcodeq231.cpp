// power of two
// given an integer n return true if it is the power of two .other wise return false.
// an integer n is power of two ,if there exist an integer x such that n==2^x.

// example
// input n =1
// output true
// explanation
// 2^0=1

// example 2
// input n = 16
// output true
// 2^4 = 16

#include <iostream>
#include <process.h>
#include<math.h>
using namespace std;

int main()
{
    system("cls");
    system("color a");
int n,ans=0;
cin>>n;

for (int i = 0; i <= 30; i++)
{
    ans=pow(2,i);
    if (ans ==n )
    {
        cout<<"true";
        break;
        /* code */
    }
    else
    {
        cout<<"false";
        break;
    }
    
    
    /* code */
}

    

    return 0;
}