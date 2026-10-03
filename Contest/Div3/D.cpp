#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n), b(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = 0; i < n; i++)
            cin >> b[i];

        bool flag = true;

        long long prev = (b[0] - a[0]);

        if (prev < 0)
            flag = false;

        for (int i = 1; i < n; i++) {
            long long cur;
            if (i % 2 == 0)
                cur = b[i] - a[i];
            else
                cur = a[i] - b[i];

            if (cur < prev)
                flag = false;

            prev = cur;
        }

        if (prev != 0)
            flag = false;

        cout << (flag ? "YES" : "NO") << '\n';
    }

    return 0;
}