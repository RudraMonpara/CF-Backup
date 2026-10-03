#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> firs_pos(51, n + 1);
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        if (firs_pos[x] == n + 1)
        {
            firs_pos[x] = i;
        }
    }
    while (q--)
    {
        int x;
        cin >> x;
        int ans = firs_pos[x];
        for (int i = 1; i <= 50; i++)
        {
            if (firs_pos[i] < ans)
            {
                firs_pos[i]++;
            }
        }
        firs_pos[x] = 1;
        cout << ans << " ";
    }
    cout << endl;
    return 0;
}