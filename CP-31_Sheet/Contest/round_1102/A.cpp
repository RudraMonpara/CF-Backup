#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        vector<long long> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a.rbegin(), a.rend());

        if (n == 2 && a[0] == a[1])
        {
            cout << a[0] << " " << a[1] << endl;
            break;
        }

        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] == a[i + 1])
            {
                cout << -1 << endl;
                break;
            }
        }

        bool possible = true;
        for (int i = 2; i < n; i++)
        {
            if (a[i] != a[i - 2] % a[i - 1])
            {
                possible = false;
                break;
            }
        }

        if (possible)
        {
            cout << a[0] << " " << a[1] << "\n";
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}