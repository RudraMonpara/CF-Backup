#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<int> findmax(vector<int> &arr)
{
    vector<pair<int, int>> tmp(arr.size());

    for (int i = 0; i < tmp.size(); i++)
    {
        tmp[i].first = arr[i];
        tmp[i].second = i;
    }

    sort(tmp.rbegin(), tmp.rend());
    vector<int> ans(3);
    for (int i=0;i<3;i++)
        ans[i] = tmp[i].second;

    return ans;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n), b(n), c(n);
        for (int i=0;i<n;i++)
            cin >> a[i];
        for (int i=0;i<n;i++)
            cin >> b[i];
        for (int i=0;i<n;i++)
            cin >> c[i];

        vector<int> maxa = findmax(a);
        vector<int> maxb = findmax(b);
        vector<int> maxc = findmax(c);

        int ans = 0;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                for (int k = 0; k < 3; k++)
                {
                    int x = maxa[i], y = maxb[j], z = maxc[k];

                    if ((x == y) || (x == z) || (z == y))
                        continue;

                    ans = max(ans, a[x] + b[y] + c[z]);
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}