#include <iostream>
#include <process.h>
using namespace std;
int linearsearch(int arr[], int n, int key){

    for (int  i = 0; i < n; i++)
    {
        if (arr[i]==key)
        {
            return i;
            /* code */
        }
        
        /* code */
    }
    return -1;
}
int main()

{
    system("cls");
    system("color a");

  int n;
  
  cin>>n;
  int arr[n];

for (int i = 0; i <n; i++)
{
    cin>>arr[i];
    /* code */
}
cout<<endl<<"Enter the element you want to find"<<endl;
int key;
cin>>key;

cout<<linearsearch(arr,n,key);
    return 0;
}