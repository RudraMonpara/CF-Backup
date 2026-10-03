#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int longestBalanced(vector<int> &nums)
    {
        vector<int> even;
        vector<int> odd;

        // Separate even and odd
        for (int num : nums)
        {
            if (num % 2 == 0)
                even.push_back(num);
            else
                odd.push_back(num);
        }

        // Remove duplicates from even
        sort(even.begin(), even.end());
        even.erase(unique(even.begin(), even.end()), even.end());

        // Remove duplicates from odd
        sort(odd.begin(), odd.end());
        odd.erase(unique(odd.begin(), odd.end()), odd.end());

        // Example: returning max size (change if needed)
        return max(even.size(), odd.size());
    }
};

int main()
{
    Solution obj;
    vector<int> nums = {1,2,2,3,4,4,5,6,6,7};

    cout << obj.longestBalanced(nums);

    return 0;
}
