#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    char findTheDifference(string s, string t) {
        int sum1 = 0, sum2 = 0;
        for (int i = 0; i < s.length(); i++) {
            sum1 += s[i];
        }
        for (int i = 0; i < t.length(); i++) {
            sum2 += t[i];
        }
        return char(sum2 - sum1);
    }
};

int main() {
    Solution sol;
    string s = "abcd";
    string t = "abcde";
    char result = sol.findTheDifference(s, t);
    cout << "The difference character is: " << result << endl;
    return 0;
}