#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;

        bool ans= false;

        // Change a
        long long new_a = 2 * b - c;
        if (new_a > 0 && new_a % a == 0)
            ans = true;

        // Change b
        long long sum = a + c;
        if (sum % 2 == 0) {
            long long new_b = sum / 2;
            if (new_b > 0 && new_b % b == 0)
                ans = true;
        }

        // Change c
        long long new_c = 2 * b - a;
        if (new_c > 0 && new_c % c == 0)
            ans = true;

        cout << (ans ? "YES" : "NO") << endl;
    }

    return 0;
}