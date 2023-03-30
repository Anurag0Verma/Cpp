#include <iostream>
#include <process.h>
#include <math.h>
using namespace std;

int main()
{
    system("cls");
    system("color a");
int n;
cin>>n;
bool flag=0;
cout<<sqrt(n)<<endl;


for (int i = 2; i <=sqrt(n); i++)
{
    if (n%i==0)
    {
        cout<<"non prime";
        flag=1;
        break;
        /* code */
    }
    
    /* code */
}
if (flag!=1)
{
    cout<<"prime";
    /* code */
}


    

    return 0;
}