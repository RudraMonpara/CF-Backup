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
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        long long carry = 0;
        long long prev = 0;
        bool flag = true;

        for (int i = 0; i < n; i++)
        {
            long long cur = a[i] + carry;
            long long need = max(1LL, prev + 1);

            if (cur < need)
            {
                flag = false;
                break;
            }

            carry = cur - need;
            prev = need;
        }

        cout << (flag ? "YES" : "NO") << endl;
    }
    return 0;
}