#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, d;
    cin >> n >> d;
    vector<long long> p(n);
    for (long long i = 0; i < n; i++)
    {
        cin >> p[i];
    }

    sort(p.begin(), p.end());

    long long l = -1, r = n - 1, teams = 0, teamsize = 1;
    while (l < r)
    {
        if ((p[r] * teamsize) <= d && l < r)
        {
            l++;
            teamsize++;
        }
        else
        {
            teams++;
            r--;
            teamsize = 1;
        }
    }
    cout << teams << endl;
    return 0;
}