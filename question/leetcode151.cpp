#include <bits/stdc++.h>
using namespace std;

string reverseWords(string s)
{
    stringstream ss(s);
    vector<string> vec;
    string word;
    string ans = "";

    while (ss >> word)
    {
        vec.push_back(word);
    }

    reverse(vec.begin(), vec.end());

    for (string st : vec)
    {
        ans = ans + st + " ";
    }
    ans.erase(ans.end() - 1);
    return ans;
}

int main()
{
    cout << reverseWords("This is a ball");

    return 0;
}