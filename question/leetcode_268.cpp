#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int n = nums.size();
        //         first way
        //         int sum1=n*(n+1)/2,sum2=0;
        //         for(int i=0;i<n;i++)
        //         {
        //             sum2+=nums[i];
        //         }
        //         return sum1-sum2;

        //         second way
        //         return n*(n+1)/2 - accumulate(nums.begin(),nums.end(),0);

        //         third fast way
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans ^= (nums[i] ^ i);
        }
        ans ^= n;
        return ans;
    }
};

int main()
{
    vector<int> a = {9, 6, 4, 2, 3, 5, 7, 0, 1};
    Solution obj;
    cout << obj.missingNumber(a);

    return 0;
}