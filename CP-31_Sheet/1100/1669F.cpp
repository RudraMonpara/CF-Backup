#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> w(n);
        for (auto &it : w)
            cin >> it;

        vector<int> suffix_sum(n);
        map<int, int> idx;
        int sum = 0;

        for (int i = n - 1; i >= 0; i--)
        {
            sum += w[i];
            idx[sum] = i;
            suffix_sum[i] = sum;
        }
        int ans = 0;
        int prefix_sum = 0;
        for (int i = 0; i < n; i++)
        {
            idx.erase(suffix_sum[i]);
            prefix_sum += w[i];
            if (idx.find(prefix_sum) != idx.end())
            {
                ans = max(ans, (i + 1) + (n - idx[prefix_sum]));
            }
        }
        cout << ans << endl;
    }
    return 0;
}