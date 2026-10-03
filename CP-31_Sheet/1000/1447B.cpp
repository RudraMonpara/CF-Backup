#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n, m;
        cin >> n >> m;
        vector<vector<long long>> a(n, vector<long long>(m));
        for (long long i = 0; i < n; i++)
        {
            for (long long j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }

        long long nega = 0;
        long long minimun = INT_MAX;
        long long sum = 0;

        for (long long i = 0; i < n; i++)
        {
            for (long long j = 0; j < m; j++)
            {
                if (a[i][j] < 0)
                {
                    nega++;
                }
                minimun = min(minimun, abs(a[i][j]));
                sum += abs(a[i][j]);
            }
        }

        if (nega % 2 == 0)
        {
            cout << sum << endl;
        }
        else
        {
            cout << sum - 2 * minimun << endl;
        }
    }
    return 0;
}