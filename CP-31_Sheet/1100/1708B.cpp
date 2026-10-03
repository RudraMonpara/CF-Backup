#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll n, l, r;
        cin >> n >> l >> r;

        vector<ll> ans;
        bool flag=true;

        for (int i = 1; i <= n; i++)
        {
            ll temp = ((l + i - 1) / i) * i;
            if (temp > r)
            {
                flag=false;
                break;
            }
            ans.push_back(temp);
        }
        if(!flag){
            cout << "NO" << endl;    
        }else{
            cout << "YES" << endl;
            for (auto it : ans)
            {
                cout << it << " ";
            }
            cout << endl;
        }
    }
    return 0;
}