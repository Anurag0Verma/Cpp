// alternative means
// swap(index[0+2],index[1+2])
// ex arr[]={1,2,3,4,5}
// output 2 1 4 3 5
// ex arr[]={3,8,2,7,4,9}
// output 8 3 7 2 9 4
#include <iostream>
#include <process.h>
using namespace std;

void swapalternative(int arr[], int size)
{

    for (int i = 0; i < size; i += 2)
    {
        swap(arr[i], arr[i + 1]);
    }
}
void printarr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    system("cls");
    system("color a");

    int evenarr[8] = {23, 87, 6, 68, 4, 3, 64, 97};
    int oddarr[5] = {34, 56, 3, 45, 67};

    swapalternative(evenarr, 8);
    swapalternative(oddarr, 5);
    printarr(evenarr, 8);
    printarr(oddarr, 5);
    return 0;
}