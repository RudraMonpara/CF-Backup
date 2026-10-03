#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n, m;
        cin >> n >> m;

        vector<long long> a(n);
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }

        vector<long long> b(m);
        for (long long i = 0; i < m; i++) {
            cin >> b[i];
        }

        vector<long long> pref(n + 1, 0);
        for (long long i = 1; i <= n; i++) {
            pref[i] = pref[i - 1] + a[i - 1];
        }

        sort(b.begin(), b.end());

        long long ans = 0;
        long long last = 0;


        for (long long x : b) {
            long long segmentSum = pref[x] - pref[last];
            ans += abs(segmentSum);
            last = x;
        }
        ans += pref[n] - pref[last];

        cout << ans << endl;
    }   
    return 0;
}