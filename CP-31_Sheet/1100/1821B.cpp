#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<ll> a(n), b(n);
        for (auto &x : a)
            cin >> x;
        for (auto &x : b)
            cin >> x;

        int change1 = -1, change2 = -1;

        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
            {
                if (change1 == -1)
                    change1 = i;
                change2 = i;
            }
        }

        while (change1 > 0 && b[change1 - 1] <= b[change1])
            change1--;

        while (change2 < n - 1 && b[change2] <= b[change2 + 1])
            change2++;

        cout << change1 + 1 << " " << change2 + 1 << "\n";
    }

    return 0;
}