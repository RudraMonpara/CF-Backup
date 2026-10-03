#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll n, c;
        cin >> n >> c;

        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll l = 1, r = 1e9, ans = -1;

        while (l <= r)
        {
            ll mid = l + (r - l) / 2;

            ll sum = 0;

            for (int i = 0; i < n; i++)
            {
                sum += (a[i] + 2 * mid) * (a[i] + 2 * mid);
                if (sum > c)
                    break;
            }

            if (sum > c)
            {
                r = mid - 1;
            }
            else
            {
                ans = mid;
                l = mid + 1;
            }
        }

        cout << ans << endl;
    }

    return 0;
}