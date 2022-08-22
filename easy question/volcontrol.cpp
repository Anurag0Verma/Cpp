// codechef
// Volume Control
// Problem Code:
// VOLCONTROL

#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;

    while (t--)
    {
        int x, y;
        cin >> x >> y;
        // 	    abs function always give a positive integer
        cout << abs(x - y) << endl;
    }
    return 0;
}
