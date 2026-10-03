#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);
        for (int i = 0; i < n; i++) {
            if (nums[i] > 0) {
                int j = (i + nums[i]) % n;
                result[i] = nums[j];
            } else if (nums[i] < 0) {
                int j = (i + nums[i] + n) % n;
                result[i] = nums[j];
            } else {
                result[i] = 0;
            }
        }
        return result;
    }
};

int main() {
    Solution s;
    vector<int> nums = {3, -2, 1, 0};
    vector<int> res = s.constructTransformedArray(nums);

    for (int x : res) cout << x << " ";
    cout << endl;

    return 0;
}
