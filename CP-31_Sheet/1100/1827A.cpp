#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define  MOD (ll)(1e9+7)

int main(){
    int t;
    cin >> t;

    while(t--){
        ll n;
        cin >> n;
        vector<ll> a(n),b(n);
        for(auto &it:a) cin >> it;
        for(auto &it:b) cin >> it;
        sort(a.begin(),a.end());
        sort(b.rbegin(),b.rend());

        ll res=1;
        for(int i=0;i<n;i++){
            ll temp=upper_bound(a.begin(),a.end(), b[i]) - a.begin();
            ll count = a.size() -temp;
            res=res * max(count - i, 0LL) % MOD;
        }
        cout << res << endl;
    }
    return 0;
}