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
        int neg = 0;
        ll sum = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            if (a[i] < 0)
            {
                ++neg;
                a[i] = -a[i];
            }
            sum += a[i];
        }
        sort(a.begin(), a.end());
        if (neg & 1)
        {
            sum -= 2 * a[0];
        }
        cout << sum << endl;
    }
    return 0;
}