#include <bits/stdc++.h>
using namespace std;

// // my code does not work in "Tide-net safe, soon, Allin. A manilla noose fastened it."
// // and many test case
// int isvowel(char ch)
// {
//     if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
//         ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
//         return 1;
//     return 0;
// }

// string reverseVowels(string s)
// {

//     string st = s;
//     int start = 0, end = s.size() - 1, n = end;

//     while (start < end)
//     {
//         int i = start, f = 0, t = 0;
//         for (; i <= n / 2; i++)
//         {
//             if (isvowel(st[i]))
//             {
//                 start = i + 1;
//                 f = 1;
//                 break;
//             }
//         }

//         int j = end;
//         for (; j >= n / 2; j--)
//         {
//             if (isvowel(st[j]))
//             {
//                 end = j - 1;
//                 t = 1;
//                 break;
//             }
//         }

//         if (f and t)
//         {
//             swap(st[i], st[j]);
//             f = 0;
//         }
//         else
//         {
//             start++;
//             end--;
//         }
//     }
//     return st;
// }  // not work why written at the begin of code
bool isvowel(char c)
{
    if (c >= 97)
        c -= 32;
    if (c == 'A' or c == 'E' or c == 'I' or c == 'O' or c == 'U')
        return true;
    return false;
}

string reverseVowels(string s)
{
    for (int i = 0, j = s.size() - 1; i < j; i++, j--)
    {
        while (i < j and not isvowel(s[i]))
            i++;
        while (i < j and not isvowel(s[j]))
            j--;
        if (i < j)
            swap(s[i], s[j]);
    }
    return s;
}

int main()
{

    cout << reverseVowels("leetcode");

    return 0;
}