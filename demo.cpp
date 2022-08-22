#include <iostream>

using namespace std;

int max_of_four(int a, int b, int c, int d)
{
    if (a>b) {
        if (a>c) {
            if (a>d) {
             return a;
           }
        }
    }
    if (b>a) {
        if (b>c) {
             if (b>d) {
                return b;
        }
        }
    }
    if (c>a) {
        if (c>b) {
                if (c>d) {
                return c;
        }
        }
    }
    if (d>b) {
        if (d>c) {
        if (d>a) {
         return d;
        }
        }
    }
}


int main() {
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    
    int ans = max_of_four(a, b, c, d);
    cout<<ans;
    
    return 0;
}
