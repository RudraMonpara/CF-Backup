#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, c;
        cin >> n >> c;

        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        long long sum_a = 0, sum_b = 0;
        for (int i = 0; i < n; i++) {
            sum_a += a[i];
            sum_b += b[i];
        }

        long long ans = INT_MAX;

        bool ok = true;
        for (int i = 0; i < n; i++) {
            if (a[i] < b[i]) {
                ok = false;
                break;
            }
        }

        if (ok) {
            ans = sum_a - sum_b;
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        ok = true;
        for (int i = 0; i < n; i++) {
            if (a[i] < b[i]) {
                ok = false;
                break;
            }
        }

        if (ok) {
            ans = min(ans, (sum_a - sum_b) + c);
        }

        if (ans == INT_MAX) {
            cout << -1 << endl;
        } else {
            cout << ans << endl;
        }
    }

    return 0;
}