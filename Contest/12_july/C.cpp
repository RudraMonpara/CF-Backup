#include <bits/stdc++.h>
using namespace std;

const int MAX_C = 150000;
const int MAX_K = 21;

int g[MAX_C + 1];

long long best[MAX_K + 1][MAX_C + 1];

void precompute()
{
    // 1. Calculate individual reduction costs
    g[0] = 0;
    g[1] = 1;
    for (int i = 2; i <= MAX_C; ++i)
    {
        if (i % 2 == 0)
        {
            g[i] = 1 + g[i / 2];
        }
        else
        {
            g[i] = 1 + g[i - 1];
        }
    }

    for (int k = 0; k <= MAX_K; ++k)
    {
        best[k][MAX_C] = (long long)MAX_C * (1LL << k) + g[MAX_C];
        for (int c = MAX_C - 1; c >= 0; --c)
        {
            long long val = (long long)c * (1LL << k) + g[c];
            best[k][c] = min(val, best[k][c + 1]);
        }
    }
}

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

        long long ans = -1;

        for (int k = 0; k <= MAX_K; ++k)
        {
            long long cur_cost = k;

            for (int i = 0; i < n; ++i)
            {
                long long c_min = (a[i] + (1LL << k) - 1) >> k;

                if (c_min > MAX_C)
                {
                    c_min = MAX_C;
                }
                cur_cost += best[k][c_min] - a[i];
            }

            if (ans == -1 || cur_cost < ans)
            {
                ans = cur_cost;
            }
        }

        cout << ans << endl;
    }

    return 0;
}