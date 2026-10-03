#include <bits/stdc++.h>
using namespace std;

int min_ops(string n, string pos_value)
{
    int ops = 0;
    int checker_index = pos_value.size() - 1;
    for (int i = n.size() - 1; i >= 0; i--)
    {
        if (n[i] == pos_value[checker_index])
        {
            checker_index--;
            if (checker_index < 0)
            {
                break;
            }
        }
        else
        {
            ops++;
        }
    }
    if (checker_index >= 0)
    {
        ops = INT_MAX;
    }
    return ops;
}

int main()
{
    long long t;
    cin >> t;

    while (t--)
    {
        string n;
        cin >> n;
        vector<string> pos_values = {"25", "50", "75", "00"};
        int ans = INT_MAX;
        for (auto pos_value : pos_values)
        {
            ans = min(ans, min_ops(n, pos_value));
        }
        cout << ans << endl;
    }
    return 0;
}