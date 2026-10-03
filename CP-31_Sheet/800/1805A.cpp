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

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int tot_xor = 0;
        for (int i = 0; i < n; i++)
        {
            tot_xor ^= a[i];
        }

        if (n % 2 == 1)
        {
            cout << tot_xor << endl;
        }
        else
        {
            if (tot_xor == 0)
            {
                cout << tot_xor << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }
    return 0;
}