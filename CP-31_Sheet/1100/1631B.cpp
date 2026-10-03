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
        vector<ll> a(n);
        for (auto &it : a)
            cin >> it;
        int ans = 0;
        int i = n - 1;
        while (i >= 0 && a[i] == a[n - 1])
        {
            i--;
        }
        if (i == -1)
        {
            cout << 0 << endl;
            continue;
        }

        while (i >= 0)
        {
            i -= (n - 1 - i);
            ans++;
            while (i >= 0 && a[i] == a[n - 1])
            {
                i--;
            }
        }
        cout << ans << endl;
    }
    return 0;
}