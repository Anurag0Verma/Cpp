#include <iostream>
#include <process.h>
using namespace std;

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

for (int i = 0; i < n-1; i++)
{
    for (int j = i+1; j < n; j++)
    {
        if (arr[j]<arr[i])
        {
            int temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;

        }
        
  }
    

}
 for (int i = 0; i <n; i++)
{
    cout<<arr[i]<<" ";
 
} 

    return 0;
}