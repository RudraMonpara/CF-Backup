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
        ll Totalsum = 0;
        for (auto &it : a)
        {
            cin >> it;
            Totalsum += it;
        }
        ll s1 = 0, s2 = 0;

        ll maxGcd = 0;
        ll ans = 0;
        for (int i = 0; i < n - 1; i++)
        {
            s1 += a[i];
            s2 = Totalsum - s1;
            ans = __gcd(s1, s2);
            maxGcd = max(maxGcd, ans);
        }

        cout << maxGcd << endl;
    }
    return 0;
}