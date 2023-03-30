// codechef question
// WA test cases
// wrong answer test cases

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;

        vector<int> s(n);
        string v;

        for (int i = 0; i < n; i++)
            cin >> s[i];
        cin >> v;
        int ans = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (s[i] < ans && v[i] == '0')
                ans = s[i];
        }
        cout << ans << endl;
    }
    return 0;
}
