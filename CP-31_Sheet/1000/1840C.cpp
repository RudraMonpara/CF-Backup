#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n, k, q;
        cin >> n >> k >> q;
        vector<long long> a(n);
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (long long i = 0; i < n; i++)
        {
            a[i] = a[i] > q ? 0 : 1;
        }
        long long count_1s = 0;
        long long ways = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1)
            {
                count_1s++;
            }
            else
            {
                if (count_1s >= k)
                {
                    long long diff = count_1s - k + 1;
                    ways += (diff * (diff + 1)) / 2;
                }
                count_1s = 0;
            }
        }
        if (count_1s >= k)
        {
            long long diff = count_1s - k + 1;
            ways += (diff * (diff + 1)) / 2;
        }

        cout << ways << endl;
    }
    return 0;
}