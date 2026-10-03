#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        if (n == 1)
        {
            cout << 1 << "\n";
            continue;
        }

        if (n == 2)
        {
            cout << -1 << endl;
            continue;
        }

        vector<long long> a(n);
        a[0] = 1;
        a[1] = 2;
        a[2] = 3;

        for (int i = 3; i < n; ++i)
        {
            a[i] = a[i - 1] * 2;
        }

        for (int i = 0; i < n; ++i)
            cout << a[i] << (i == n - 1 ? "" : " ");
        cout << endl;
    }
    return 0;
}