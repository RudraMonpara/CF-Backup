#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumDeletions(string s) {
        int count=0;
        for (int i = 0, j=i+1; j < s.size(); i++, j++) {
            if (s[i] == 'b' && s[j] == 'a') {   
                count++;
            }
        }
        return count;
    }
};

int main() {
    Solution sol;
    string s = "bbaaaaabb";
    cout << sol.minimumDeletions(s) << endl; // Output: 2
    return 0;
}