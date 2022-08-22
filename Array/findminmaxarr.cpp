#include <iostream>
#include <process.h>
using namespace std;

int main()
{
  system("cls");
  system("color a");

  int n, max, min;
  cout << "Enter arr size :";
  cin >> n;

  int arr[n];

  cout << "Enter the elements" << endl;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    /* code */
  }
  max = arr[0];
  min = arr[0];
  cout << "showing entered elements" << endl;
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
    /* code */
  }

  // algo
  for (int i = 0; i < n; i++)
  {
    if (arr[i] > max)
    {
      max = arr[i];
    }

    if (arr[i] < min)
    {
      min = arr[i];
      /* code */
    }

    /* code */
  }
  cout << endl
       << "max=" << max << endl
       << "min=" << min << endl;

  return 0;
}