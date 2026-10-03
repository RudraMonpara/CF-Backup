#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        long long res = 0;
        for (int i = 0; i < n - 1; i++) {
            long long x;
            cin >> x;
            res += x;
        }

        cout << -res << "\n";
    }
    return 0;
}