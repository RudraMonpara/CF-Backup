#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool check(ll mid, vector<ll> &heights, ll x)
{
    ll units = 0;
    int n = heights.size();
    for (int i = 0; i < n; i++)
    {
        if (heights[i] < mid)
        {
            units += (mid - heights[i]);
        }
    }
    return units <= x;
}
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll n, x;
        cin >> n >> x;
        vector<ll> heights(n);
        for (int i = 0; i < n; i++)
        {
            cin >> heights[i];
        }
        ll st = 1, end = 1e12, ans = -1;
        while (st <= end)
        {
            ll mid = (st + end) / 2;
            if (check(mid, heights, x))
            {
                ans = mid;
                st = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}