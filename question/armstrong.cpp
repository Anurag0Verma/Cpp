#include <iostream>
#include <process.h>
#include<math.h>
using namespace std;

int main()
{
    system("cls");
    system("color a");

//   amstrong means  
//  take a no , take their digit cube then add them 
//  you get the same no
//  like 153

int sum=0,n;
cin>>n;
int orign=n;
while (n!=0)
{
    int last = n%10;
last=last *last*last;
// last=pow(last,3);
    sum=sum+last;

    n/=10;
    /* code */
}

if (sum==orign)
{
    cout<<sum<<endl<<"Amstrong no";
    /* code */
}
else
{
    cout<<sum<<endl<<"Not Armstrong";
}


    return 0;
}