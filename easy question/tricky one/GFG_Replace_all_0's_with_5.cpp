// link= https://practice.geeksforgeeks.org/problems/replace-all-0-with-5-in-an-input-integer/1?page=1&difficulty[]=-2&sortBy=submissions

#include <bits/stdc++.h>
using namespace std;

int convertToFive(int N)
{
    if (N == 0)
    {
        return 0;
    }
    int last_digit = N % 10;
    if (last_digit == 0)
        last_digit = 5;
    int a = convertToFive(N / 10) * 10 + last_digit;
    return a;
}

int convertFive(int n)
{
    int sum = 0, rank = 1;
    // Your code here
    while (n != 0)
    {
        int digit = n % 10;
        if (digit == 0)
            digit = 5;
        sum = sum + (digit * rank);
        rank = rank * 10;
        n = n / 10;
    }
    return sum;
}

int convert_five(int n)
{
    int sum = 0;
    for (int rank = 1; n > 0; n = n / 10, rank *= 10)
    {
        int digit = n % 10;
        if (digit == 0)
            digit = 5;
        sum = sum + digit * rank;
    }
    return sum;
}

int main()
{
    int N = 14006;
    cout << "Rcursion way = " << convertToFive(N) << endl;
    cout << "While loop way = " << convertFive(N) << endl;
    cout << "For loop way = " << convert_five(N) << endl;
    return 0;
}