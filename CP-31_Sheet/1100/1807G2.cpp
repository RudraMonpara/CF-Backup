#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> c(n);
        for (auto &it : c)
            cin >> it;
        sort(c.begin(), c.end());
        if (c[0] != 1)
        {
            cout << "NO" << endl;
            continue;
        }
        ll sum = 1;
        bool flag = true;
        for (int i = 1; i < n; i++)
        {
            if (c[i] > sum)
            {
                flag = false;
                break;
            }
            sum += c[i];
        }
        cout << (flag ? "YES" : "NO") << endl;
    }
    return 0;
}